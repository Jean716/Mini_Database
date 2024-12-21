#ifndef BPLUSTREE_H
#define BPLUSTREE_H
#include <iostream>
#include <iomanip> // for setw
#include <cassert>
#include "../../includes/bplustree/btree_array_functions.h"
#include "../../includes/bplustree/bplustree.h"

template <class T>
class BPlusTree
    {
    public:
        /*=========================================== Nested Class ===========================================*/
        class Iterator
            {
            public:
                friend class BPlusTree;
                Iterator(BPlusTree<T>* _it = NULL, int _key_ptr = 0) : it(_it), key_ptr(_key_ptr) {
                    DEBUG_PRINT("\nIterator Constructor Fired!\n");
                    }
                T operator *() // dereference operator
                    {
                    assert(it != nullptr && "iterator points to NULL");
                    return it->data[key_ptr];
                    }
                Iterator operator++(int un_used) {
                    DEBUG_PRINT("Iterator operator++(int un_used) Fired!");
                    Iterator temp = *this;
                    if (it) {
                        if (key_ptr < it->data_count - 1) {
                            key_ptr++;
                            }
                        else {
                            it = it->next;
                            key_ptr = 0;
                            }
                        }
                    return temp;
                    }
                Iterator operator++() {
                    DEBUG_PRINT("operator++ Fired!");
                    if (it) {
                        if (key_ptr < it->data_count - 1) {
                            key_ptr++;
                            }
                        else {
                            it = it->next;
                            key_ptr = 0;
                            }
                        }
                    return *this;
                    }

                friend bool operator ==(const Iterator& lhs, const Iterator& rhs) {
                    return lhs.it == rhs.it && lhs.key_ptr == rhs.key_ptr;

                    }
                friend bool operator !=(const Iterator& lhs, const Iterator& rhs) {
                    return !(lhs == rhs);
                    }

                void print_Iterator() {
                    DEBUG_PRINT("print_Iterator Fired!");

                    BPlusTree<T>* current = it;
                    int pos = key_ptr;

                    while (current) {
                        std::cout << "Node at address: " << current << ", Data: ";

                        print_array(current->data, current->data_count, pos);

                        if (current->next) {
                            std::cout << " -> Next node at address: " << current->next << ", First data: " << current->next->data[0] << std::endl;
                            }
                        else {
                            std::cout << " -> Next node: nullptr" << std::endl;
                            }

                        current = current->next;
                        pos = 0;
                        }

                    if (!it) {
                        std::cout << "iterator: NULL, key_ptr: " << key_ptr << std::endl;
                        }
                    }


                bool is_null() { return !it; }
                void info() {
                    std::cout << std::endl << "Iterator info:" << std::endl;
                    std::cout << "key_ptr: " << key_ptr << std::endl;
                    std::cout << "it: " << *it << std::endl;
                    }
            private:
                BPlusTree<T>* it;
                int key_ptr;
            };
        /*=========================================== Nested Class ===========================================*/
        BPlusTree(bool dups = false);
        BPlusTree(T *a, int size, bool dups = false);
        void verify_leaf_chain();
        BPlusTree<T>* get_smallest_node();

        //big three:
        BPlusTree(const BPlusTree<T>& other);
        ~BPlusTree();
        BPlusTree<T>& operator =(const BPlusTree<T>& RHS);

        void copy_tree(const BPlusTree<T>& other);  //copy other into this object
        void copy_tree(const BPlusTree<T>& other, BPlusTree<T>*& last_node);

        void insert(const T& entry);   //insert entry into the tree
        void remove(const T& entry);   //remove entry from the tree
        void clear_tree();             //clear this object (delete all nodes etc.)

        bool contains(const T& entry) const; //true if entry can be found
        T& get(const T& entry);              //return a reference to entry
        const T& get(const T& entry)const;   //return a reference to entry
        T& get_existing(const T& entry);     //return a reference to entry
        Iterator find(const T& key);         //return an iterator to this key.
        //     NULL if not there.
        Iterator lower_bound(const T& entry);  //return first that goes NOT BEFORE
        // key entry or next if does not
        // exist: >= entry
        Iterator upper_bound(const T& entry);  //return first that goes AFTER key
        //exist or not, the next entry  >entry

        int size() const;                    //count the number of elements

        bool empty() const;                  //true if the tree is empty

        void print_tree(int level = 0, std::ostream &outs = std::cout) const;
        void update_parent_keys();

        friend std::ostream& operator<<(std::ostream& outs,
            const BPlusTree<T>& print_me) {
            print_me.print_tree(0, outs);
            return outs;
            }

        bool is_valid();
        string in_order();
        string pre_order();
        string post_order();

        Iterator begin();
        Iterator end();
        ostream& list_keys(Iterator from = NULL, Iterator to = NULL) {
            if (from == NULL) from = begin();
            if (to == NULL) to = end();
            for (Iterator it = from; it != to; it++)
                std::cout << *it << " ";
            return std::cout;
            }



        void check_node_consistency() const {
            if (!is_leaf()) {
                if (child_count != data_count + 1) {
                    std::cerr << "Consistency error: child_count = " << child_count
                        << ", but should be data_count + 1 = " << (data_count + 1) << std::endl;
                    }
                }

            if (is_leaf() && child_count != 0) {
                std::cerr << "Consistency error in leaf node: child_count should be 0, but is " << child_count << std::endl;
                }

            std::cout << "Node consistency check passed: data_count = " << data_count
                << ", child_count = " << child_count << std::endl;
            }


    private:
        static const int MINIMUM = 1;
        static const int MAXIMUM = 2 * MINIMUM;

        bool dups_ok;                        //true if duplicate keys are allowed
        int data_count;                      //number of data elements
        int child_count;                     //number of children
        bool success_flag;  // Flag to track if a new key was inserted or an existing one was updated


        T data[MAXIMUM + 1];                 //holds the keys
        BPlusTree* subset[MAXIMUM + 2];      //subtrees
        BPlusTree* next;


        bool is_leaf() const {
            return child_count == 0;
            }             //true if this is a leaf node

        T* find_ptr(const T& entry);         //return a pointer to this key.
        // NULL if not there.

         //insert element functions
        void loose_insert(const T& entry);   //allows MAXIMUM+1 data elements in the root
        void fix_excess(int i);              //fix excess in child i

        //remove element functions:
        void loose_remove(const T& entry);  //allows MINIMUM-1 data elements in the root

        BPlusTree<T>* fix_shortage(int i);  //fix shortage in child i and return the smallest key in this subtree

        void get_smallest(T& entry)const;      //entry := leftmost leaf
        void get_biggest(T& entry);       //entry := rightmost leaf
        void remove_biggest(T& entry);    //remove the biggest child of tree->entry
        void transfer_left(int i);        //transfer one element LEFT from child i
        void transfer_right(int i);       //transfer one element RIGHT from child i
        BPlusTree<T> *merge_with_next_subset(int i); //merge subset i with  i+1

    };

//ANCHOR - implementation
/*======================================================= Functions Definition =======================================================*/
//------------------------------------------------------------------- -
//            C T O R  /  B I G   T H R E E
//---------------------------------------------------------------------
template <class T>
BPlusTree<T>::BPlusTree(bool dups) : dups_ok(dups), data_count(0), child_count(0), next(nullptr) {
    for (int i = 0; i < MAXIMUM + 1; ++i) {
        subset[i] = nullptr;
        }
    }

template <class T>
BPlusTree<T>::BPlusTree(T *a, int size, bool dups) : dups_ok(dups), data_count(0), child_count(0), next(nullptr) {
    for (int i = 0; i < size; ++i) {
        insert(a[i]);
        }
    }
//big three:
template <class T>
BPlusTree<T>::BPlusTree(const BPlusTree<T>& other) {
    BPlusTree<T>* last_node = nullptr;  // Initialize last_node to nullptr
    copy_tree(other, last_node);
    cout << "-65----TOP bptree copy constructor" << *this << endl;
    cout << "-- 65--- leaving bptree copy constructor" << *this << endl;
    }

template <class T>
BPlusTree<T>::~BPlusTree() {

    clear_tree();
    }

template <class T>
BPlusTree<T>& BPlusTree<T>::operator=(const BPlusTree<T>& RHS) {
    if (this != &RHS) {
        clear_tree();
        BPlusTree<T>* last_node = nullptr;  // Initialize last_node to nullptr
        copy_tree(RHS, last_node);
        }
    return *this;
    }


//---------------------------------------------------------------------
//            B E G I N ( )   &   E N D ( )
//---------------------------------------------------------------------

template <typename T>
typename BPlusTree<T>::Iterator BPlusTree<T>::begin() {
    DEBUG_PRINT("begin() Fired!");

    return Iterator(get_smallest_node());
    }
template <typename T>
typename BPlusTree<T>::Iterator BPlusTree<T>::end() {
    DEBUG_PRINT("end() Fired!");
    return Iterator(NULL);
    }


//---------------------------------------------------------------------
//            Contain ( )   &   Get( ) & Find
//---------------------------------------------------------------------
template <typename T>
bool BPlusTree<T>::contains(const T& entry) const {
    int i = first_ge(data, data_count, entry);
    bool found = (i < data_count && data[i] == entry);

    if (is_leaf()) {
        return found;
        }
    else {
        if (found) {
            return true;
            }
        else {
            return subset[i]->contains(entry);
            }
        }
    }
template <typename T>
T& BPlusTree<T>::get(const T& entry) {
    //If entry is not in the tree, add it to the tree
    //assert(contains(entry));
   // cout << "get() Fired!" << endl;
    if (!contains(entry))
        insert(entry);
    // cout << "get() Done!" << endl;
    return get_existing(entry);

    }

template <typename T>
T& BPlusTree<T>::get_existing(const T& entry) {
    int i = first_ge(data, data_count, entry);
    bool found = (i < data_count && data[i] == entry);
    if (is_leaf()) {
        if (found) {
            return data[i];
            }
        else {
            DEBUG_PRINT("get_existing was called with nonexistent entry");
            assert(found);
            }
        }
    if (found) //inner node
        return subset[i + 1]->get(entry);
    //or just return true?
    else //not found yet...
        return subset[i]->get(entry);


    }

template <typename T>
typename BPlusTree<T>::Iterator BPlusTree<T>::find(const T& entry) {
    int i = first_ge(data, data_count, entry);
    bool found = (i < data_count && data[i] == entry);

    if (is_leaf()) {
        if (found) {
            return Iterator(this, i);
            }
        else {
            return Iterator(nullptr);
            }
        }
    else {
        if (found) {
            return subset[i + 1]->find(entry);
            }
        else {
            return subset[i]->find(entry);
            }
        }
    }
//------------------------------------------------
//         Print
//------------------------------------------------

template <class T>
void BPlusTree<T>::print_tree(int level, ostream &outs) const {

    // recursivly print the rightmost child
    if (child_count > 0 && subset[child_count - 1] != nullptr) {
        subset[child_count - 1]->print_tree(level + 1, outs);

        }
    if (next == nullptr && level == 0) {
        outs << setw(4 * level) << "" << "^" << std::endl;
        }
    if (next != nullptr) {
        outs << setw(4 * level) << "" << "^" << std::endl;
        }
    outs << setw(4 * level) << "" << "⎴" << std::endl;

    for (int i = data_count - 1; i >= 0; --i) {
        outs << setw(4 * level) << "" << left << setw(4) << data[i] << std::endl;

        if (i == 0) {
            outs << setw(4 * level) << "" << "⎵" << std::endl;
            }


        if (i < child_count - 1 && subset[i] != nullptr) {
            subset[i]->print_tree(level + 1, outs);
            }
        }

    }

//ANCHOR - insert
//------------------------------------------------
//          I N S E R T
//------------------------------------------------
template <typename T>
void BPlusTree<T>::insert(const T& entry) {

    DEBUG_PRINT("Insert Function Fired! Inserting: " << entry);
    // call loose_insert
    loose_insert(entry);

    // if the root has excess data, create a new node and copy the contents of the root into it
    if (data_count > MAXIMUM) {
        DEBUG_PRINT("Root has excess data, creating a new node and copying the contents of the root into it.");
        BPlusTree<T>* new_node = new BPlusTree<T>(dups_ok);
        BPlusTree<T>* last_node = get_smallest_node();
        DEBUG_PRINT("Last Node: " << last_node);
        new_node->copy_tree(*this, last_node);

        DEBUG_PRINT("Clearing the current root node and making the new node the root's child.");
        data_count = 0;
        child_count = 1;
        subset[0] = new_node;
        DEBUG_PRINT("After that, the root's child count is: " << child_count << " and the data count is: " << data_count);

        // if the new node has excess data, call fix_excess
        if (subset[0]->data_count > MAXIMUM) {
            fix_excess(0);
            }
        }

    }


template <typename T>
void BPlusTree<T>::loose_insert(const T& entry) {
    DEBUG_PRINT("loose_insert fired!");
    int i = first_ge(data, data_count, entry);
    DEBUG_PRINT("First GE Fired! i: " << i);
    bool found = (i < data_count && data[i] == entry);


    if (found && !dups_ok) {
        success_flag = false;
        return;
        }

    if (is_leaf()) {
        ordered_insert(data, data_count, entry);
        success_flag = true;
        DEBUG_PRINT("ordered_insert Done!");
        return;
        }
    else {
        DEBUG_PRINT("Inserting into subset: " << i);
        if (subset[i] == nullptr) {
            subset[i] = new BPlusTree<T>(dups_ok);
            }
        subset[i]->loose_insert(entry);
        if (subset[i]->data_count > MAXIMUM) {
            fix_excess(i);
            }
        }
    }


//ANCHOR - fix_excess
template <typename T>
void BPlusTree<T>::fix_excess(int i) {
    DEBUG_PRINT("Fix Excess Fired!");

    // Create a new right node
    BPlusTree<T>* right = new BPlusTree<T>(dups_ok);

    // Insert the right node into the subset array
    if (child_count == 0) {
        subset[i + 1] = right;
        child_count++;
        }
    else {
        insert_item(subset, i + 1, child_count, right);
        DEBUG_PRINT("insert: " << subset[i + 1]);
        }

    split(subset[i]->data, subset[i]->data_count, subset[i + 1]->data, subset[i + 1]->data_count);


    // Insert the middle item into the data array
    T middle;
    detach_item(subset[i]->data, subset[i]->data_count, middle);
    DEBUG_PRINT("Middle item extracted: " << middle);
    insert_item(data, i, data_count, middle);

    if (subset[i]->is_leaf()) {
        ordered_insert(right->data, right->data_count, middle);
        DEBUG_PRINT("Middle item inserted into right node: " << middle);
        right->next = subset[i]->next;
        subset[i]->next = right;
        }
    else {
        int mid = subset[i]->child_count / 2;
        for (int j = mid; j < subset[i]->child_count; ++j) {
            right->subset[j - mid] = subset[i]->subset[j];  // shallow copy
            right->child_count++;
            }
        subset[i]->child_count = mid;  // update the child count of the left node
        }
    DEBUG_PRINT("Split child nodes between left and right nodes.");
    }


//ANCHOR - remove
//------------------------------------------------
//          R E M O V E
//------------------------------------------------
template <typename T>
void BPlusTree<T>::remove(const T & entry) {
    DEBUG_PRINT("Remove Function Fired! Removing: " << entry);
    loose_remove(entry);

    if (data_count == 0 && child_count == 1) {
        BPlusTree<T>* shrink_ptr = subset[0];

        cout << "Shrink pointer data count: " << shrink_ptr->data_count << endl;
        cout << "Shrink pointer child count: " << shrink_ptr->child_count << endl;

        data_count = shrink_ptr->data_count;
        child_count = shrink_ptr->child_count;
        for (int i = 0; i < data_count; i++) {
            data[i] = shrink_ptr->data[i];
            cout << "Copied data[" << i << "]: " << data[i] << endl;
            }
        for (int i = 0; i < child_count; i++) {
            subset[i] = shrink_ptr->subset[i];
            cout << "Copied subset[" << i << "]: " << subset[i] << endl;
            }

        next = shrink_ptr->next;
        cout << "Updated next pointer: " << next << endl;

        shrink_ptr->child_count = 0;
        delete shrink_ptr;
        cout << "Deleted shrink pointer" << endl;
        }

    if (data_count == 0 && child_count == 0) {
        next = nullptr;
        cout << "Tree is now empty" << endl;
        }

    cout << "Data count: " << data_count << endl;
    cout << "Child count: " << child_count << endl;


    // verify_leaf_chain();
    }



//ANCHOR - loose_remove 
template <typename T>
void BPlusTree<T>::loose_remove(const T & entry) {
    cout << "Loose Remove Fired! " << endl;
    int i = first_ge(data, data_count, entry);

    DEBUG_PRINT("First GE Fired! i: " << i << ", data_count: " << data_count);
    bool found = (i < data_count && data[i] == entry);

    DEBUG_PRINT("Found: " << found);
    T delete_me = entry;

    if (is_leaf()) {
        DEBUG_PRINT("\n>>>!!!!!Find it !IS Leaf Node!");
        if (!found) {
            // [a.] is not found in the leaf: no action needed
            cout << "Entry not found in leaf; no action needed." << endl;
            }
        else {
            // [b.] found in the leaf: delete the target
            cout << "Entry found in leaf; deleted: " << delete_me;
            if (data_count == 0 && next != nullptr) {
                cout << "Leaf node is empty, updating next pointer.";
                }

            delete_item(data, i, data_count, delete_me);


            }
        return;


        }
    else {
        // Not a leaf node
        if (!found) {
            // [c.] not found in this node; go deeper in subset[i]
            subset[i]->loose_remove(entry);


            // Check if subset[i] is short after removal and fix it if necessary
            if (subset[i]->data_count < MINIMUM) {
                fix_shortage(i);
                }
            }
        else {
            // [d.] entry is found in this non-leaf node at data[i]
            subset[i + 1]->loose_remove(entry);


            // If shortage occurs in subset[i+1] after removal, fix it
            if (subset[i + 1]->data_count < MINIMUM) {
                fix_shortage(i + 1);
                }

            // If `entry` was removed, replace data[i] with the smallest in subset[i+1]
            // if (i < data_count && data[i] == entry) {
            //     cout << "Entry was removed, replacing data[" << i << "]" << data[i] << "with the smallest in subset[" << (i + 1) << "]" << subset[i + 1]->data[0] << endl;
            //     T smallest;
            //     subset[i + 1]->get_smallest(smallest);
            //     data[i] = smallest;
            //     }
            if (i < data_count && data[i] == entry) {
                cout << "Entry was removed, replacing data[" << i << "] " << data[i]
                    << " with the rightmost leaf of subset[" << (i + 1) << "]" << subset[i + 1]->data[data_count - 1] << endl;
                T rightmost;
                subset[i + 1]->get_biggest(rightmost);
                data[i] = rightmost;
                cout << "rightmost: " << rightmost << endl;
                }

            }
        }

    if (!is_valid()) {
        std::cerr << "Tree is NOT valid after remove operation!" << std::endl;
        update_parent_keys();

        }
    }

template <typename T>
void BPlusTree<T>::update_parent_keys() {
    cout << "Update parent keys fired!" << endl;
    if (is_leaf()) {
        return;
        }

    for (int i = 0; i < child_count; ++i) {
        subset[i]->update_parent_keys();  // recursive call
        if (i > 0) {
            T smallest;
            subset[i]->get_smallest(smallest);
            data[i - 1] = smallest;
            }
        }

    }


//ANCHOR - fix_shortage
template <typename T>
BPlusTree<T>* BPlusTree<T>::fix_shortage(int i) {
    cout << "Fix shortage fired!" << endl;
    // check if the right sibling can lend an item
    if (i < child_count - 1 && subset[i + 1]->data_count > MINIMUM) {
        transfer_left(i + 1);

        }
    // check if the left sibling can lend an item
    else if (i > 0 && subset[i - 1]->data_count > MINIMUM) {
        transfer_right(i - 1);
        }
    // merge with the left sibling if it exists
    else if (i < child_count - 1) { // there is a right sibling

        return merge_with_next_subset(i);

        }
    // merge with the right sibling
    else if (i > 0) {  // there is a left sibling

        return merge_with_next_subset(i - 1);

        }

    update_parent_keys();

    check_node_consistency();

    return this;
    }



//ANCHOR - get_smallest
template <typename T>
void BPlusTree<T>::get_smallest(T & entry) const {
    //replace entry with the left_most leaf of this tree
    // Keep looking in the first subtree (recursive)
    //  until you get to a leaf.
    // Then, replace entry with data[0] of the leaf node
    if (is_leaf()) {
        entry = data[0];
        }
    else {
        subset[0]->get_smallest(entry);
        }
    }

//ANCHOR - merge_with_next_subset
template <typename T>
BPlusTree<T>* BPlusTree<T>::merge_with_next_subset(int i) {
    cout << "Merging with next subset fired!" << endl;
    BPlusTree<T>*left = subset[i];
    BPlusTree<T>* right = subset[i + 1];

    T removed_data;
    delete_item(data, i, data_count, removed_data);

    if (left->is_leaf()) {
        cout << "left is leaf" << endl;
        left->next = right->next;
        DEBUG_PRINT("left->next: " << left->next);
        delete_item(subset, i + 1, child_count, right);
        merge(left->data, left->data_count, right->data, right->data_count);

        }

    if (!left->is_leaf()) {
        cout << "left is not leaf" << endl;
        attach_item(left->data, left->data_count, right->subset[0]->data[0]);
        left->subset[i]->next = right->subset[0];
        merge(left->data, left->data_count, right->data, right->data_count);
        merge(left->subset, left->child_count, right->subset, right->child_count);
        delete_item(subset, i + 1, child_count, right);

        }

    std::cout << "Merge completed" << std::endl;
    update_parent_keys();
    if (!is_valid()) {
        std::cerr << "Tree is NOT valid after remove operation!" << std::endl;
        }
    return left;

    }



//ANCHOR - transfer_left
template <class T>
void BPlusTree<T>::transfer_left(int i) {
    std::cout << "Transfering left from subset[" << i << "] to subset[" << (i - 1) << "]" << std::endl;

    BPlusTree<T>* shortNode = subset[i - 1];
    BPlusTree<T>* rightSibling = subset[i];
    std::cout << "shortNode address: " << shortNode << ", rightSibling address: " << rightSibling << std::endl;

    // Move the first item from rightSibling to shortNode
    T borrowed_item;
    delete_item(rightSibling->data, 0, rightSibling->data_count, borrowed_item);
    attach_item(shortNode->data, shortNode->data_count, borrowed_item);
    std::cout << "Moved item from rightSibling to shortNode: " << borrowed_item << std::endl;

    // Update the parent's data
    data[i - 1] = rightSibling->data[0];
    std::cout << "Updated parent data[" << (i - 1) << "] to: " << data[i - 1] << std::endl;

    // Move the first child from rightSibling to shortNode if not a leaf
    if (!shortNode->is_leaf()) {
        attach_item(shortNode->subset, shortNode->child_count, rightSibling->subset[0]);
        delete_item(rightSibling->subset, 0, rightSibling->child_count, rightSibling->subset[0]);
        std::cout << "Moved child from rightSibling to shortNode" << std::endl;
        }

    // Update the next pointer if shortNode is a leaf
    if (shortNode->is_leaf()) {
        shortNode->next = rightSibling->next;
        std::cout << "Updated shortNode->next to: " << shortNode->next << std::endl;
        }

    std::cout << "Transfer left completed" << std::endl;
    update_parent_keys();
    if (!is_valid()) {
        std::cerr << "Tree is NOT valid after remove operation!" << std::endl;


        }
    }



template <typename T>
void BPlusTree<T>::transfer_right(int i) {
    std::cout << "Transfering right from subset[" << i << "] to subset[" << (i + 1) << "]" << std::endl;

    T borrowed_item;
    BPlusTree<T>* leftSibling = subset[i];
    BPlusTree<T>* rightSibling = subset[i + 1];

    detach_item(leftSibling->data, leftSibling->data_count, borrowed_item);
    std::cout << "After detach, leftSibling->data_count: " << leftSibling->data_count << std::endl;

    insert_item(rightSibling->data, 0, rightSibling->data_count, borrowed_item);

    data[i] = rightSibling->data[0];

    if (!leftSibling->is_leaf()) {
        BPlusTree<T>* borrowed_child;
        detach_item(leftSibling->subset, leftSibling->child_count, borrowed_child);
        insert_item(rightSibling->subset, 0, rightSibling->child_count, borrowed_child);
        std::cout << "Moved child from leftSibling to rightSibling" << std::endl;
        }



    std::cout << "Updated child_count: leftSibling = " << leftSibling->child_count
        << ", rightSibling = " << rightSibling->child_count
        << ", parent = " << child_count << std::endl;

    std::cout << "Transfer right completed" << std::endl;

    update_parent_keys();
    if (!is_valid()) {
        std::cerr << "Tree is NOT valid after transfer_right operation!" << std::endl;
        }
    }

//---------------------------------------------------------------
//      C L E A R   /  C O P Y
//---------------------------------------------------------------


template <typename T>
void BPlusTree<T>::clear_tree() {
    cout << "-[0]- BplusTree<T>::Clear tree fired!" << endl;
    for (int i = 0; i < child_count; ++i) {
        if (subset[i] != nullptr) {
            subset[i]->clear_tree();
            delete subset[i];
            subset[i] = nullptr;
            }
        }

    data_count = 0;
    child_count = 0;
    next = nullptr;
    }

template <typename T>
void BPlusTree<T>::copy_tree(const BPlusTree<T>&other) {
    cout << "Copy tree fired!" << endl;
    assert(empty());
    data_count = other.data_count;
    child_count = other.child_count;
    dups_ok = other.dups_ok;

    for (int i = 0; i < data_count; ++i) {
        data[i] = other.data[i];
        }

    for (int i = 0; i < child_count; ++i) {
        if (other.subset[i]) {
            subset[i] = new BPlusTree<T>(dups_ok);
            subset[i]->copy_tree(*other.subset[i]);
            }
        }

    next = other.next ? new BPlusTree<T>(*other.next) : nullptr;
    cout << "Copy tree completed!" << endl;
    }

//ANCHOR - copy_tree
template <class T>
void BPlusTree<T>::copy_tree(const BPlusTree<T>&other, BPlusTree<T>*&last_node) {
    if (!empty()) {
        clear_tree();
        }

    DEBUG_PRINT("\n--- Starting copy_tree ---\n");
    DEBUG_PRINT("New node address: " << this << ", Other node address: " << &other);

    // Copy basic node properties
    data_count = other.data_count;
    child_count = other.child_count;
    dups_ok = other.dups_ok;

    // Copy root data
    for (int i = 0; i < data_count; ++i) {
        data[i] = other.data[i];
        }
    DEBUG_PRINT("Data in New node: ");
    for (int i = 0; i < data_count; ++i) DEBUG_PRINT(data[i] << " ");
    DEBUG_PRINT("\n");

    // Copy child nodes

    if (is_leaf()) { // if this is a leaf node
        DEBUG_PRINT("Is Leaf Node");
        next = nullptr;
        if (last_node) {
            DEBUG_PRINT("Last Node Exist,setting last node's next to this node");
            DEBUG_PRINT("LAST NODE: " << last_node);
            last_node->next = this;
            DEBUG_PRINT("Last Node's next is now: " << last_node->next);
            }
        last_node = this;  // update last_node to this node
        return;
        }
    else {
        DEBUG_PRINT("Is Not Leaf Node");
        DEBUG_PRINT("There are " << child_count << " children");
        // Copy child nodes
        for (int i = 0; i < child_count; ++i) {
            DEBUG_PRINT("Copying child " << i);
            subset[i] = new BPlusTree<T>(dups_ok);  // create a new child node
            subset[i]->copy_tree(*other.subset[i], last_node);  //  copy the child node
            }
        // next = nullptr; // make sure non-leaf nodes have no next pointer

       // DEBUG_PRINT("--- Finished copy of node ---\n");
        }
    }




template <typename T>
int BPlusTree<T>::size() const {
    int total = 0;

    if (is_leaf()) {
        total += data_count;
        return total;
        }

    total += data_count;
    for (int i = 0; i < child_count; ++i) {
        total += subset[i]->size();
        }

    return total;
    }

template <typename T>
bool BPlusTree<T>::empty() const {
    return (data_count == 0) && (child_count == 0);
    }

template <typename T>
bool BPlusTree<T>::is_valid() {

    // Check if the data in each node is sorted in ascending order
    for (int i = 0; i < data_count - 1; i++) {
        if (!(data[i] <= data[i + 1])) {
            std::cout << "Data order violation: data[" << i << "] = " << data[i]
                << " should be less than or equal data[" << i + 1 << "] = " << data[i + 1] << "\n";
            return false;
            }
        }


    if (is_leaf()) {
        // 1.Check leaf node chaining
        if (next && !(data[data_count - 1] <= next->data[0])) {
            std::cout << "Leaf node chaining error: current node max " << data[data_count - 1]
                << " should be less than next node min " << next->data[0] << "\n";
            return false;
            }
        return true;
        }

    // 2.Verify every data[i] is less than or equal to the minimum element of subset[i+1]
    for (int i = 0; i < data_count; i++) {
        // check the right subtree's smallest value
        T biggest_in_left;
        subset[i]->get_biggest(biggest_in_left);
        if (!(biggest_in_left <= data[i])) {
            std::cout << "Left subtree order violation: largest element in subset[" << i << "] = " << biggest_in_left
                << " should be <= data[" << i << "] = " << data[i] << "\n";
            return false;
            }

        // check the right subtree's smallest value
        T smallest_in_right;
        subset[i + 1]->get_smallest(smallest_in_right);
        if (!(data[i] <= smallest_in_right)) {
            std::cout << "Right subtree order violation: data[" << i << "] = " << data[i]
                << " should be <= smallest element in subset[" << (i + 1) << "] = " << smallest_in_right << "\n";
            return false;
            }
        }

    //4. Verify that the number of children is one more than the number of data elements
    // std::cout << "Node type: " << (is_leaf() ? "Leaf" : "Internal")
    //     << ", Data count: " << data_count
    //     << ", Child count: " << child_count << std::endl;

    if (child_count != data_count + 1) {
        std::cout << "Child count error: child_count = " << child_count
            << ", but should be data_count + 1 = " << (data_count + 1) << "\n";
        return false;
        }

    // 5.Recursively check each subset
    for (int i = 0; i < child_count; i++) {
        if (!subset[i]->is_valid()) {
            std::cout << "Subtree violation in subset[" << i << "]\n";
            return false;
            }
        }

    return true;
    }

template <typename T>
std::string BPlusTree<T>::in_order() {
    std::string result;
    if (is_leaf()) {
        for (int i = 0; i < data_count; ++i) {
            result += to_string(data[i]) + "|";
            }
        }
    else {
        for (int i = 0; i < data_count; ++i) {
            result += subset[i]->in_order();
            result += to_string(data[i]) + "|";
            }
        result += subset[data_count]->in_order();
        }
    return result;
    }
template <typename T>
std::string BPlusTree<T>::pre_order() {
    std::string result;
    for (int i = 0; i < data_count; ++i) {
        result += std::to_string(data[i]) + "|";
        if (i < child_count) {
            result += subset[i]->pre_order();
            }
        }

    for (int i = data_count; i < child_count; ++i) {
        result += subset[i]->pre_order();
        }

    return result;
    }


//ANCHOR - post_order
template <typename T>
std::string BPlusTree<T>::post_order() {
    std::string result;

    if (child_count > 0 && subset[0] != nullptr) {
        result += subset[0]->post_order();
        }

    if (child_count > 1 && subset[1] != nullptr) {
        result += subset[1]->post_order();
        }

    if (data_count > 0) {
        result += std::to_string(data[0]) + "|";
        }

    if (child_count > 2 && subset[2] != nullptr) {
        result += subset[2]->post_order();
        }

    if (data_count > 1) {
        result += std::to_string(data[data_count - 1]) + "|";
        }
    return result;
    }

template <typename T>
T* BPlusTree<T>::find_ptr(const T & entry) {
    // NULL if not there.
    int i = first_ge(data, data_count, entry);
    bool found = (i < data_count && data[i] == entry);

    if (found && is_leaf()) return &data[i];
    if (is_leaf()) return nullptr;

    return found ? subset[i + 1]->find_ptr(entry) : subset[i]->find_ptr(entry);
    }

template <typename T>
void BPlusTree<T>::get_biggest(T & entry) {
    if (is_leaf()) {
        entry = data[data_count - 1];
        }
    else {
        subset[child_count - 1]->get_biggest(entry);
        }
    }

//ANCHOR - verify_leaf_chain
template <typename T>
void BPlusTree<T>::verify_leaf_chain() {
    const BPlusTree<T>* current = get_smallest_node();
    std::vector<T> all_data;  // for collecting all data in the leaf chain
    while (current) {
        // std::cout << "Current: " << current << ", Data: ";
        for (int i = 0; i < current->data_count; ++i) {
            // std::cout << current->data[i] << (i < current->data_count - 1 ? ", " : "");
            all_data.push_back(current->data[i]);  // only for collecting all data
            }
        //std::cout << std::endl;


        if (current->next) {
            // std::cout << "Next: " << current->next
               //  << ", Next first data: " << current->next->data[0] << std::endl;

            if (current->data[current->data_count - 1] > current->next->data[0]) {
                cout << "Warning: Leaf chain order violation at node " << current << std::endl;
                }
            }
        else {
            cout << "Next pointer is nullptr" << std::endl;
            }

        current = current->next;
        }

    cout << "\nAll leaf data in sequence: ";
    for (const T& data : all_data) {
        cout << data << " ";
        }
    cout << std::endl;
    }

//ANCHOR - get_smallest_node
template <typename T>
BPlusTree<T>* BPlusTree<T>::get_smallest_node() {
    if (is_leaf()) {
        return this;
        }
    return subset[0]->get_smallest_node();
    }

template <typename T>
typename BPlusTree<T>::Iterator BPlusTree<T>::lower_bound(const T & entry) {
    int i = first_ge(data, data_count, entry);
    bool found = (i < data_count && data[i] == entry);

    if (is_leaf()) {
        // if found, return the position
        if (found) {
            return Iterator(this, i);
            }
        // if not found, return the next position
        return (i < data_count) ? Iterator(this, i) : (next ? Iterator(next, 0) : end());
        }

    // at non-leaf nodes, if found, recursively search in the right subtree
    if (found) {
        return subset[i + 1]->lower_bound(entry);
        }
    // if not found, recursively search in the left subtree
    return subset[i]->lower_bound(entry);
    }



template <typename T>
typename BPlusTree<T>::Iterator BPlusTree<T>::upper_bound(const T & entry) {
    int i = first_gt(data, data_count, entry);
    bool found = (i < data_count && data[i] == entry);

    if (is_leaf()) {
        if (found && i + 1 < data_count) {
            return Iterator(this, i);
            }
        else if (!found && i < data_count) {
            return Iterator(this, i);
            }
        else {
            return (next) ? Iterator(next, 0) : end();
            }
        }

    if (found) {
        return subset[i + 1]->upper_bound(entry);
        }
    else {
        return subset[i]->upper_bound(entry);
        }
    }

template <typename T>
const T& BPlusTree<T>::get(const T & entry) const {
    int i = first_ge(data, data_count, entry);
    bool found = (i < data_count && data[i] == entry);

    if (is_leaf()) {
        assert(found);
        return data[i];
        }

    return found ? subset[i + 1]->get(entry) : subset[i]->get(entry);
    }

template <typename T>
void BPlusTree<T>::remove_biggest(T & entry) {
    if (is_leaf()) {
        // If it's a leaf node, the largest element is the last in `data`
        entry = data[data_count - 1];
        data_count--;  // Reduce data count to effectively "remove" it
        }
    else {
        // Not a leaf node, recursively call remove_biggest on the rightmost child
        subset[child_count - 1]->remove_biggest(entry);

        // If the rightmost child is now below minimum data count, fix the shortage
        if (subset[child_count - 1]->data_count < MINIMUM) {
            fix_shortage(child_count - 1);
            }
        }
    }


#endif // BPLUSTREE_H