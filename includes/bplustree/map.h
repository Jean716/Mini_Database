#ifndef MAP_H
#define MAP_H
#include "../../includes/bplustree/btree_array_functions.h"
#include "../../includes/bplustree/bplustree.h"
#include <iostream>
using namespace std;


template <typename K, typename V>
struct Pair
    {
    K key;
    V value;

    Pair(const K& k = K(), const V& v = V()) : key(k), value(v) {}
    friend ostream& operator<<(ostream& outs, const Pair<K, V>& print_me) {
        outs << print_me.key << ": " << print_me.value;
        return outs;
        }
    friend bool operator==(const Pair<K, V>& lhs, const Pair<K, V>& rhs) {
        return lhs.key == rhs.key;
        }
    friend bool operator < (const Pair<K, V>& lhs, const Pair<K, V>& rhs) {
        return lhs.key < rhs.key;
        }

    friend bool operator > (const Pair<K, V>& lhs, const Pair<K, V>& rhs) {
        return lhs.key > rhs.key;
        }
    friend bool operator <= (const Pair<K, V>& lhs, const Pair<K, V>& rhs) {
        return lhs.key <= rhs.key;
        }
    friend Pair<K, V> operator + (const Pair<K, V>& lhs, const Pair<K, V>& rhs) {
        assert(lhs.key == rhs.key);  // Ensure keys are the same
        return Pair(lhs.key, lhs.value + rhs.value);
        }
    };

template <typename K, typename V>
class Map
    {
    public:
        typedef BPlusTree<Pair<K, V>> map_base;
        class Iterator
            {
            public:
                friend class Map;
                Iterator() : _it(typename map_base::Iterator()) {}
                Iterator(typename map_base::Iterator it) : _it(it) {}
                Iterator operator ++(int unused) {
                    Iterator temp = *this;
                    ++_it;
                    return temp;
                    }

                Iterator operator ++() {
                    ++_it;
                    return *this;
                    }

                Pair<K, V> operator *() {
                    return *_it;
                    }

                friend bool operator ==(const Iterator& lhs, const Iterator& rhs) {
                    return lhs._it == rhs._it;
                    }
                friend bool operator !=(const Iterator& lhs, const Iterator& rhs) {
                    return lhs._it != rhs._it;

                    }
            private:
                typename map_base::Iterator _it;
            };

        Map();
        //  Iterators
        Iterator begin() {
            return Iterator(map.begin());
            }
        Iterator end() {
            return Iterator(map.end());
            }

        //  Capacity
        int size() const {
            return map.size();
            }
        bool empty() const {
            return map.empty();
            }

        //  Element Access
        V& operator[](const K& key);

        V& at(const K& key) {
            return map.get(Pair<K, V>(key)).value;
            }
        const V& at(const K& key) const {
            return map.get(Pair<K, V>(key)).value;
            }

        //  Modifiers
        void insert(const K& k, const V& v);
        void erase(const K& key);

        void clear() {
            map.clear_tree();
            }
        V get(const K& key);

        //  Operations:
        Iterator find(const K& key) {
            return Iterator(map.find(Pair<K, V>(key)));
            }

        bool contains(const Pair<K, V>& target) const {
            return map.contains(target);
            }

        // I have not writtent hese yet, but we will need them:
        //    int count(const K& key);

        Iterator    lower_bound(int const& key); // return the first pair with a key not less than key (>= key)
        Iterator   upper_bound(int const& key); // return the first pair with a key greater than key (> key)
        Iterator   equal_range(int const& key); // return a pair of iterators with the same key
        bool is_valid() { return map.is_valid(); }

        friend ostream& operator<<(ostream& outs, const Map<K, V>& print_me) {
            outs << print_me.map << endl;
            return outs;
            }
    private:
        int key_count;
        BPlusTree<Pair<K, V> > map;
    };


template <typename K, typename V>
Map<K, V>::Map() : key_count(0), map(BPlusTree<Pair<K, V>>()) {}

template <typename K, typename V>
void Map<K, V>::insert(const K& k, const V& v) {
    Pair<K, V> pair(k, v);
    map.insert(pair);
    key_count++;
    }

template <typename K, typename V>
void Map<K, V>::erase(const K& key) {
    Pair<K, V> pair(key, V()); // Create a pair with the key
    map.remove(pair);
    key_count--;
    }


template <typename K, typename V>
V& Map<K, V>::operator[](const K& key) {
    Pair<K, V> pair(key);
    if (!map.contains(pair)) {
        insert(key, V());
        }
    return map.get(pair).value;
    }



template <typename K, typename V>
V Map<K, V>::get(const K& key) {
    if (map.contains(Pair<K, V>(key))) {
        return map.get(Pair<K, V>(key)).value;
        }
    return V();
    }

template <typename K, typename V>
typename Map<K, V>::Iterator Map<K, V>::lower_bound(int const& key) {
    return Iterator(map.lower_bound(Pair<K, V>(key)));
    }

template <typename K, typename V>
typename Map<K, V>::Iterator Map<K, V>::upper_bound(int const& key) {
    return Iterator(map.upper_bound(Pair<K, V>(key)));
    }

template <typename K, typename V>
typename Map<K, V>::Iterator Map<K, V>::equal_range(int const& key) {
    return lower_bound(key);
    }



#endif // MAP_H

