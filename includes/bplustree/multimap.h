#ifndef MULTIMAP_H
#define MULTIMAP_H
#include "../../includes/bplustree/btree_array_functions.h"
#include "../../includes/bplustree/bplustree.h"
#include "../../includes/bplustree/map.h"


template <typename K, typename V>
struct MPair
    {
    K key;
    vector<V> value_list;

    //--------------------------------------------------------------------------------
    /*      MPair CTORs:
     *  must have these CTORs:
     *  - default CTOR / CTOR with a key and no value: this will create an empty vector
     *  - CTOR with a key AND a value: pushes the value into the value_list
     *  _ CTOR with a key and a vector of values (to replace value_list)
     */
     //--------------------------------------------------------------------------------
    MPair(const K& k = K()) : key(k) {}
    MPair(const K& k, const V& v) : key(k) {
        value_list.push_back(v);
        }
    MPair(const K& k, const vector<V>& vlist) : key(k), value_list(vlist) {}

    K& first() { return key; }
    const K& first() const { return key; }

    vector<V>& second() { return value_list; }
    const vector<V>& second() const { return value_list; }

    //--------------------------------------------------------------------------------
    //You'll need to overlod << for your vector:
    friend ostream& operator <<(ostream& outs, const MPair<K, V>& print_me) {
        outs << print_me.key << ": [";
        for (size_t i = 0; i < print_me.value_list.size(); ++i) {
            outs << print_me.value_list[i];
            if (i < print_me.value_list.size() - 1) outs << ", ";
            }
        outs << "]";
        return outs;
        }

    friend bool operator ==(const MPair<K, V>& lhs, const MPair<K, V>& rhs) {
        return lhs.key == rhs.key;
        }

    friend bool operator < (const MPair<K, V>& lhs, const MPair<K, V>& rhs) {
        return lhs.key < rhs.key;
        }

    friend bool operator <= (const MPair<K, V>& lhs, const MPair<K, V>& rhs) {
        return lhs.key <= rhs.key;
        }
    friend bool operator > (const MPair<K, V>& lhs, const MPair<K, V>& rhs) {
        return lhs.key > rhs.key;
        }
    friend MPair<K, V> operator + (const MPair<K, V>& lhs, const MPair<K, V>& rhs) {
        assert(lhs.key == rhs.key); // Ensure keys are the same
        MPair<K, V> result(lhs.key, lhs.value_list);
        result.value_list.insert(result.value_list.end(), rhs.value_list.begin(), rhs.value_list.end());
        return result;
        }
    };







template <typename K, typename V>
class MMap
    {
    public:
        typedef BPlusTree<MPair<K, V>> map_base;

        class Iterator
            {
            public:
                friend class MMap;
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

                MPair<K, V>& operator *() {
                    return *_it;
                    }

                MPair<K, V>* operator->() {
                    return &(*_it);
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


        MMap() : mmap(BPlusTree<MPair<K, V>>()) {}

        //  Iterators

        Iterator begin() { return Iterator(mmap.begin()); }
        Iterator end() { return Iterator(mmap.end()); }

        Iterator begin() const { return Iterator(mmap.begin()); }
        Iterator end() const { return Iterator(mmap.end()); }

        vector<V>& at(const K& key) {
            if (!contains(key)) {
                throw out_of_range("Key not found in MMap.");
                }
            return mmap.get(MPair<K, V>(key)).value_list;
            }

        const vector<V>& at(const K& key) const {
            if (!contains(key)) {
                throw out_of_range("Key not found in MMap.");
                }
            return mmap.get(MPair<K, V>(key)).value_list;
            }

        //  Capacity
        int size() const { return mmap.size(); }
        bool empty() const { return mmap.empty(); }

        //  Element Access
        const vector<V>& operator[](const K& key) const { return mmap.get(MPair<K, V>(key)).value_list; }
        vector<V>& operator[](const K& key) { return mmap.get(MPair<K, V>(key)).value_list; }








        //  Modifiers
        void insert(const K& k, const V& v) {
            MPair<K, V> m_pair(k, v);
            if (mmap.contains(m_pair)) {
                mmap.get(m_pair).value_list.push_back(v);  // Append if key exists
                }
            else {
                mmap.insert(m_pair);  // Insert new MPair
                }
            }

        void erase(const K& key) {
            MPair<K, V> m_pair(key);
            mmap.remove(m_pair);
            }
        void clear() {
            mmap.clear_tree();
            }

        //  Operations:
        bool contains(const K& key) const {
            return mmap.contains(MPair<K, V>(key));

            }
        vector<V> &get(const K& key) {
            return mmap.get(MPair<K, V>(key)).value_list;

            }

        Iterator find(const K& key) {
            return Iterator(mmap.find(MPair<K, V>(key)));

            }

        int count(const K& key) {
            if (!contains(key)) return 0;
            return mmap.get(MPair<K, V>(key)).value_list.size();
            }


        Iterator    lower_bound(K const&  key) {
            return Iterator(mmap.lower_bound(MPair<K, V>(key)));
            }

        Iterator    lower_bound(K const&  key) const {
            return Iterator(mmap.lower_bound(MPair<K, V>(key)));
            }

        Iterator   upper_bound(K const&  key) {
            return Iterator(mmap.upper_bound(MPair<K, V>(key)));

            }
        Iterator   upper_bound(K const&  key) const {
            return Iterator(mmap.upper_bound(MPair<K, V>(key)));

            }

        pair<Iterator, Iterator> equal_range(const K& key) {
            auto start = lower_bound(key);
            auto end = upper_bound(key);
            return { start, end };
            }

        pair<Iterator, Iterator> equal_range(const K& key) const {
            auto start = lower_bound(key);
            auto end = upper_bound(key);
            return { start, end };
            }


        bool is_valid() { return mmap.is_valid(); }

        void print_lookup() {
            for (auto it = begin(); it != end(); ++it) {
                const MPair<std::string, std::string>& pair = *it;

                cout << setw(12) << right << pair.key << ":    ";

                for (size_t i = 0; i < pair.value_list.size(); ++i) {
                    cout << pair.value_list[i];
                    if (i < pair.value_list.size() - 1) {
                        cout << " ";
                        }
                    }
                cout << endl;
                }
            }

        friend ostream& operator<<(ostream & outs, const MMap<K, V>&print_me) {
            outs << print_me.mmap << endl;
            return outs;
            }


        vector<V> range_query(const K& key, const string& op) {
            vector<V> result;
            if (op == "<") {
                auto end = lower_bound(key);
                for (auto it = begin(); it != end; ++it) {
                    result.insert(result.end(), it->value_list.begin(), it->value_list.end());
                    }
                }
            else if (op == "<=") {
                auto end = upper_bound(key);
                for (auto it = begin(); it != end; ++it) {
                    result.insert(result.end(), it->value_list.begin(), it->value_list.end());
                    }
                }
            else if (op == ">") {
                auto start = upper_bound(key);
                for (auto it = start; it != end(); ++it) {
                    result.insert(result.end(), it->value_list.begin(), it->value_list.end());
                    }
                }
            else if (op == ">=") {
                auto start = lower_bound(key);
                for (auto it = start; it != end(); ++it) {
                    result.insert(result.end(), it->value_list.begin(), it->value_list.end());
                    }
                }
            return result;
            }


    private:
        BPlusTree<MPair<K, V> > mmap;
    };



#endif // MULTIMAP_H    