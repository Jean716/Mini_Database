#include <iostream>
#include <iomanip>

#include "includes/bplustree/map.h"
#include "includes/table/table.h"
#include "includes/token/token.h"
#include "includes/queue/MyQueue.h"
#include "includes/token/child_tokens.h"

#include <cassert>
using namespace std;

void test_copy_tree() {
    cout << "=== Testing copy_tree ===" << endl;

    BPlusTree<int> original;
    original.insert(10);
    original.insert(20);
    original.insert(30);
    original.insert(40);
    original.insert(50);
    original.insert(60);

    cout << "Original Tree:" << endl;
    original.print_tree();
    original.verify_leaf_chain();

    // 测试单参数的 copy_tree
    BPlusTree<int> copy1;
    copy1.copy_tree(original);

    cout << "\nCopied Tree (single parameter):" << endl;
    copy1.print_tree();
    copy1.verify_leaf_chain();

    BPlusTree<int> copy2;
    BPlusTree<int>* last_node = nullptr;
    copy2.copy_tree(original, last_node);

    cout << "\nCopied Tree (with last_node):" << endl;
    copy2.print_tree();
    copy2.verify_leaf_chain();

    cout << "\nModifying original tree by inserting 70 and 80..." << endl;
    original.insert(70);
    original.insert(80);

    cout << "\nOriginal Tree after modification:" << endl;
    original.print_tree();
    original.verify_leaf_chain();

    cout << "\nCopied Tree (single parameter) after modification of original:" << endl;
    copy1.print_tree();
    copy1.verify_leaf_chain();

    cout << "\nCopied Tree (with last_node) after modification of original:" << endl;
    copy2.print_tree();
    copy2.verify_leaf_chain();

    cout << "\n=== End of copy_tree test ===" << endl;
    }

int main(int argv, char** argc) {

    test_copy_tree();
    cout << "\n\n\n=====================" << endl;
    return 0;
    }