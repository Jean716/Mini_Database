// Randomized property tests for BPlusTree<int>.
// Every operation is mirrored on std::set (the reference model); after each
// step we check structural invariants (is_valid) and that the tree's contents
// match the model exactly.
#include "gtest/gtest.h"
#include <algorithm>
#include <random>
#include <set>
#include <vector>

#include "../../includes/bplustree/bplustree.h"
using namespace std;

namespace {

vector<int> collect(BPlusTree<int>& tree) {
    vector<int> out;
    for (auto it = tree.begin(); it != tree.end(); ++it) out.push_back(*it);
    return out;
}

void expect_matches(BPlusTree<int>& tree, const set<int>& model) {
    ASSERT_TRUE(tree.is_valid());
    vector<int> expected(model.begin(), model.end());
    EXPECT_EQ(collect(tree), expected);
    EXPECT_EQ(tree.size(), static_cast<int>(model.size()));
}

}  // namespace

TEST(BPlusTree, EmptyTree) {
    BPlusTree<int> tree;
    EXPECT_TRUE(tree.empty());
    EXPECT_FALSE(tree.contains(42));
}

TEST(BPlusTree, SequentialInsertKeepsOrder) {
    BPlusTree<int> tree;
    set<int> model;
    for (int i = 0; i < 500; ++i) {
        tree.insert(i);
        model.insert(i);
    }
    expect_matches(tree, model);
}

TEST(BPlusTree, RandomInsertAndLookup) {
    mt19937 rng(7);
    uniform_int_distribution<int> dist(0, 10000);
    BPlusTree<int> tree;
    set<int> model;
    for (int i = 0; i < 2000; ++i) {
        int x = dist(rng);
        tree.insert(x);
        model.insert(x);
    }
    expect_matches(tree, model);
    for (int probe = 0; probe < 1000; ++probe) {
        int x = dist(rng);
        EXPECT_EQ(tree.contains(x), model.count(x) == 1) << "key " << x;
    }
}

TEST(BPlusTree, RandomInsertRemoveAgainstStdSet) {
    for (unsigned seed : {1u, 2u, 3u, 4u, 5u}) {
        mt19937 rng(seed);
        uniform_int_distribution<int> key(0, 300);
        bernoulli_distribution do_insert(0.6);
        BPlusTree<int> tree;
        set<int> model;
        for (int step = 0; step < 3000; ++step) {
            int x = key(rng);
            if (do_insert(rng) || model.empty()) {
                tree.insert(x);
                model.insert(x);
            } else if (model.count(x)) {
                tree.remove(x);
                model.erase(x);
            }
            ASSERT_TRUE(tree.is_valid()) << "seed " << seed << ", step " << step;
        }
        expect_matches(tree, model);
    }
}

TEST(BPlusTree, RemoveEverything) {
    BPlusTree<int> tree;
    vector<int> keys(400);
    for (int i = 0; i < 400; ++i) keys[i] = i;
    shuffle(keys.begin(), keys.end(), mt19937(11));
    for (int k : keys) tree.insert(k);
    shuffle(keys.begin(), keys.end(), mt19937(12));
    for (int k : keys) {
        tree.remove(k);
        ASSERT_TRUE(tree.is_valid());
    }
    EXPECT_TRUE(tree.empty());
}

TEST(BPlusTree, LowerAndUpperBound) {
    BPlusTree<int> tree;
    for (int i = 0; i <= 100; i += 10) tree.insert(i);
    EXPECT_EQ(*tree.lower_bound(35), 40);
    EXPECT_EQ(*tree.lower_bound(40), 40);
    EXPECT_EQ(*tree.upper_bound(40), 50);
}

TEST(BPlusTree, CopyIsIndependent) {
    BPlusTree<int> original;
    for (int i = 0; i < 50; ++i) original.insert(i);
    BPlusTree<int> copy;
    copy.copy_tree(original);
    original.insert(1000);
    original.remove(0);
    EXPECT_TRUE(copy.contains(0));
    EXPECT_FALSE(copy.contains(1000));
    EXPECT_TRUE(copy.is_valid());
}
