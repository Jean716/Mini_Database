// #ifndef BTREE_H
// #define BTREE_H
// #include <iostream>
// using namespace std;
// #define DEBUG 0

// #if DEBUG
// #define DEBUG_PRINT(x) (std::cout << x << std::endl)
// #else
// #define DEBUG_PRINT(x)
// #endif

// #include "../../includes/bplustree/btree_array_functions.h"

// template <typename T>
// class BTree
//     {
//     public:
//         class Iterator
//             {
//             public:
//                 Iterator(T* ptr = nullptr) : _ptr(ptr) {}
//                 T& operator*() { return *_ptr; }
//                 Iterator& operator++() {
//                     return *this;
//                     }

//                 friend bool operator==(const Iterator& lhs, const Iterator& rhs) {
//                     return lhs._ptr == rhs._ptr;
//                     }

//                 friend bool operator!=(const Iterator& lhs, const Iterator& rhs) {
//                     return !(lhs == rhs);
//                     }
//             private:
//                 T* _ptr;
//             };

//         Iterator begin() {
//             return Iterator(&data[0]);
//             }

//         Iterator end() {
//             return Iterator(&data[data_count]);
//             }

//         // Iterator find(const T& value) {
//         //     for (int i = 0; i < data_count; ++i) {
//         //         if (data[i] == value) {
//         //             return Iterator(&data[i]);
//         //             }
//         //         }
//         //     return end();
//         //     }

//         BTree(bool dups = false);
//         BTree(T *a, int size, bool dups = false);

//         // Big three:
//         BTree(const BTree<T>& other);
//         ~BTree();
//         BTree<T>& operator=(const BTree<T>& RHS);

//         void insert(const T& entry);                // Insert entry into the tree
//         void remove(const T& entry);                // Remove entry from the tree

//         void clear_tree();                          // Clear this object (delete all nodes etc.)
//         void copy_tree(const BTree<T>& other);      // Copy other into this object
//         bool contains(const T& entry);              // True if entry can be found in the array
//         T& get(const T& entry);                     // Return a reference to entry in the tree
//         T* find(const T& entry);                    // Return a pointer to this key. NULL if not there.
//         T& get_existing(const T& entry);
//         int size() const;                           // Count the number of elements in the tree
//         bool empty() const;                         // True if the tree is empty
//         bool is_valid();
//         void grow_tree();

//         void print_tree(int level = 0, ostream &outs = cout) const;
//         friend ostream& operator<<(ostream& outs, const BTree<T>& print_me) {
//             print_me.print_tree(0, outs);
//             return outs;
//             }

//         string in_order();                          // Traverse the tree in an inorder fashion, return a string of all the data items with vertical delimiters
//         bool success_flag;  // Flag to track if a new key was inserted or an existing one was updated

//     private:
//         static const int MINIMUM = 1;
//         static const int MAXIMUM = 2 * MINIMUM;

//         T data[MAXIMUM + 1];                        // Holds the keys
//         BTree* subset[MAXIMUM + 2];                 // Subtrees

//         int data_count;                             // Number of data elements
//         int child_count;                            // Number of children
//         bool dups_ok;                               // True if duplicate keys may be inserted


//         bool is_leaf() const {
//             for (int i = 0; i < child_count; ++i) {
//                 if (subset[i] != nullptr) {
//                     return false;
//                     }
//                 }
//             return child_count == 0;
//             } // True if this is a leaf node

//         // Insert element functions
//         void loose_insert(const T& entry);          // Allows MAXIMUM+1 data elements in the root
//         void fix_excess(int i);                     // Fix excess of data elements in child i

//         // Remove element functions:
//         void loose_remove(const T& entry);          // Allows MINIMUM-1 data elements in the root
//         void fix_shortage(int i);                   // Fix shortage of data elements in child i
//         void remove_biggest(T& entry);              // Remove the biggest child of this tree->entry
//         void rotate_left(int i);                    // Transfer one element LEFT from child i
//         void rotate_right(int i);                   // Transfer one element RIGHT from child i
//         void merge_with_next_subset(int i);         // Merge subset i with subset i+1
//     };

// template <typename T>
// BTree<T>::BTree(bool dups) : data_count(0), child_count(0), dups_ok(dups) {
//     for (int i = 0; i < MAXIMUM + 2; ++i) {
//         subset[i] = nullptr;
//         }
//     }

// template <typename T>
// BTree<T>::BTree(T *a, int size, bool dups) : data_count(0), child_count(0), dups_ok(dups) {
//     for (int i = 0; i < MAXIMUM + 2; ++i) {
//         subset[i] = nullptr;
//         }
//     for (int i = 0; i < size; ++i) {
//         insert(a[i]);   // Insert all the elements from the array
//         }
//     }

// template <typename T>
// BTree<T>::BTree(const BTree<T>& other) {

//     data_count = other.data_count;
//     child_count = other.child_count;
//     dups_ok = other.dups_ok;
//     for (int i = 0; i < data_count; i++) {
//         data[i] = other.data[i];  // Copy data
//         }
//     for (int i = 0; i < child_count; i++) {
//         if (other.subset[i] != nullptr) {
//             subset[i] = new BTree<T>(*other.subset[i]);  // Recursively copy children
//             }
//         else {
//             subset[i] = nullptr;
//             }
//         }
//     }

// template <typename T>
// BTree<T>::~BTree() {
//     // cout << "Calling destructor for BTree at address: " << this << endl;
//     clear_tree();
//     }

// template <typename T>
// BTree<T>& BTree<T>::operator=(const BTree<T>& RHS) {
//     if (this != &RHS) {
//         clear_tree();
//         data_count = RHS.data_count;
//         child_count = RHS.child_count;
//         dups_ok = RHS.dups_ok;

//         for (int i = 0; i < data_count; ++i) {
//             data[i] = RHS.data[i];
//             }

//         for (int i = 0; i < child_count; ++i) {
//             if (RHS.subset[i] != nullptr) {
//                 subset[i] = new BTree<T>(*RHS.subset[i]);
//                 }
//             else {
//                 subset[i] = nullptr;
//                 }
//             }
//         }
//     return *this;
//     }

// //ANCHOR - Insert
// template <typename T>
// void BTree<T>::insert(const T& entry) {
//     //* in order for this typename To be able to keep track of the number of the keys, this function (and the functions
//     //* it calls ) must return a success code.
//     //* If we are to keep track of the number the keys (as opposed to key/values) then the success 
//     //*  code must distinguish between inserting a new key, or adding a new key to the existing key. 
//     //*  (for "dupes_ok")
//     //
//     //* loose_insert this entry into this root.
//     //* loose_insert(entry) will insert entry into this tree. Once it returns, all the subtrees are valid
//     //*  btree subtrees EXCEPT this root may have one extra data item:
//     //*  in this case (we have excess in the root)
//     //*  create a new node, copy all the contents of this root into it,
//     //*  clear this root node,
//     //*   make the new node this root's only child (subset[0])
//     //
//     //* Then, call fix_excess on this only subset (subset[0])

//     DEBUG_PRINT("\nCalling Insert Function to insert [" << entry << "]");

//     loose_insert(entry);

//     if (data_count > MAXIMUM) {
//         grow_tree();

//         }

//     }


// //ANCHOR - grow_tree
// template <typename T>
// void BTree<T>::grow_tree() {
//     DEBUG_PRINT("\nCalling grow_tree by creating new root");

//     // Create a new root
//     BTree<T>* new_node = new BTree<T>(dups_ok);
//     DEBUG_PRINT("New node created at address: " << new_node);

//     DEBUG_PRINT("Copying data from current root to new node.");
//     // copy_array(new_node->data, data, new_node->data_count, data_count);
//     // DEBUG_PRINT("New node data count after copying: " << new_node->data_count);
//     // for (int i = 0; i < new_node->data_count; ++i) {
//     //     DEBUG_PRINT("New node data[" << i << "]: " << new_node->data[i]);
//     //     }
//     // DEBUG_PRINT("Copying subset from current root to new node.");
//     // for (int j = 0; j < child_count; ++j) {
//     //     new_node->subset[j] = subset[j];
//     //     DEBUG_PRINT("New node subset[" << j << "] set to address: " << new_node->subset[j]);
//     //     }
//     // new_node->child_count = child_count;
//     // DEBUG_PRINT("New node child count: " << new_node->child_count);


//     new_node->copy_tree(*this);

//     data_count = 0;
//     child_count = 1;
//     subset[0] = new_node;
//     DEBUG_PRINT("Current root cleared and new node set as subset[0].");

//     if (subset[0]->data_count > MAXIMUM) {
//         DEBUG_PRINT("New node has excess data, calling fix_excess.");
//         fix_excess(0);
//         }


//     DEBUG_PRINT("grow_tree function done. New node data: ");
//     for (int i = 0; i < new_node->data_count; ++i) {
//         DEBUG_PRINT(new_node->data[i] << " ");
//         }

//     if (!is_valid()) {
//         DEBUG_PRINT("Tree is invalid after grow_tree!");
//         }
//     else {
//         DEBUG_PRINT("Tree is valid after grow_tree.");
//         }
//     }


// //ANCHOR - remove
// template <typename T>
// void BTree<T>::remove(const T & entry) {
//     //Loose_remove the entry from this tree.
//    //once you return from loose_remove, the root (this object) may have no data and only a single subset
//    //now, the tree must shrink:
//    //  point a temporary pointer (shrink_ptr) and point it to this root's only subset
//    //  copy all the data and subsets of this subset into the root (through shrink_ptr)
//    //  now, the root contains all the data and poiners of it's old child.
//    //  now, simply delete shrink_ptr (blank out child), and the tree has shrunk by one level.
//    //  Note, the root node of the tree will always be the same, it's the child node we delete
//    //cout << "before remove: " << endl;

//     cout << "Calling remove: [" << entry << "]\n" << endl;
//     loose_remove(entry);

//     // Debugging output before checking if the root needs to shrink
//     // cout << "After loose_remove, root data_count: " << data_count << ", child_count: " << child_count << endl;
//     // cout << "Root data: ";
//     // for (int i = 0; i < data_count; ++i) {
//     //     cout << data[i] << " ";
//     //     }
//     // cout << endl;

//     if (data_count == 0 && child_count == 1) {
//         //cout << "Root needs to shrink. Creating a temporary pointer to the only child." << endl;

//         BTree<T>* shrink_ptr = subset[0];

//         // Debugging output for the child node before copying
//         // cout << "Child node data_count: " << shrink_ptr->data_count << ", child_count: " << shrink_ptr->child_count << endl;
//         // cout << "Child node data: ";
//         // for (int i = 0; i < shrink_ptr->data_count; ++i) {
//         //     cout << shrink_ptr->data[i] << " ";
//         //     }
//         // cout << endl;

//         copy_array(data, shrink_ptr->data, data_count, shrink_ptr->data_count);
//         copy_array(subset, shrink_ptr->subset, child_count, shrink_ptr->child_count);

//         // Debugging output after copying
//         // cout << "After copying, root data_count: " << data_count << ", child_count: " << child_count << endl;
//         // cout << "Root data: ";
//         // for (int i = 0; i < data_count; ++i) {
//         //     cout << data[i] << " ";
//         //     }
//         // cout << endl;

//         shrink_ptr->child_count = 0;
//         delete shrink_ptr;
//         shrink_ptr = nullptr;

//         //  cout << "Child node deleted. Tree has shrunk by one level." << endl;
//         }
//     }

// // //ANCHOR - clear
// // template <typename T>
// // void BTree<T>::clear_tree() {
// //     static bool is_root_call = true;
// //     if (is_root_call) {
// //         cout << "Clearing the tree from root: " << this << std::endl;
// //         is_root_call = false;
// //         }
// //     for (int i = 0; i < child_count; ++i) {
// //         if (subset[i] != nullptr) { // if the child node is not empty
// //             subset[i]->clear_tree(); // recursively clear the child node
// //             delete subset[i]; // delete the child node
// //             subset[i] = nullptr; // avoid memory leak
// //             }
// //         }

// //     child_count = 0;
// //     data_count = 0;

// //     }

// template <typename T>
// void BTree<T>::clear_tree() {
//     if (!is_leaf()) {
//         for (int i = 0; i < child_count; i++) {
//             if (subset[i] != nullptr) {
//                 subset[i]->clear_tree();
//                 delete subset[i];
//                 subset[i] = nullptr;
//                 }
//             }
//         }
//     data_count = 0;
//     child_count = 0;

//     //cout << "Cleared BTree node at address: " << this << endl;
//     }

// //ANCHOR - copy_tree
// template <typename T>
// void BTree<T>::copy_tree(const BTree<T>&other) {
//     if (this == &other) {
//         DEBUG_PRINT("Warning: Self-reference detected in copy_tree().");
//         return;
//         }
//     clear_tree();

//     data_count = other.data_count;
//     child_count = other.child_count;
//     dups_ok = other.dups_ok;

//     for (int i = 0; i < data_count; ++i) {
//         data[i] = other.data[i];
//         }
//     for (int i = 0; i < child_count; ++i) {
//         if (other.subset[i] != nullptr) {
//             subset[i] = new BTree<T>(dups_ok);
//             subset[i]->copy_tree(*other.subset[i]);
//             }
//         else {
//             subset[i] = nullptr;
//             }
//         }
//     }
// //---------------------------------------------------------------------
// //            C O N T A I N S / F I N D / G E T / E T C .
// //---------------------------------------------------------------------
// template <typename T>
// bool BTree<T>::contains(const T & entry) {
//     int i = first_ge(data, data_count, entry);

//     if (i < data_count && data[i] == entry) {
//         return true;
//         }

//     if (is_leaf()) {
//         return false;
//         }

//     if (subset[i] == nullptr) {
//         return false;
//         }

//     return subset[i]->contains(entry);
//     }
// template <typename T>
// T& BTree<T>::get_existing(const T & entry) {
//     T* found = find(entry); // Find the entry
//     assert(found != nullptr); // Make sure the entry is found
//     return *found; // Return the entry
//     }
// template <typename T>
// T &BTree<T>::get(const T & entry) {
//     if (!contains(entry))
//         insert(entry);

//     return get_existing(entry);
//     }

// // Find
// template <typename T>
// T* BTree<T>::find(const T & entry) {
//     int i = first_ge(data, data_count, entry); // first_ge tells you in which branch the entry can be found
//     if (i < data_count && data[i] == entry) {
//         // cout << "Found at index " << i << ": " << data[i] << endl;
//         return &data[i]; // find the entry, return the pointer to the entry
//         }
//     else if (is_leaf()) {
//         //cout << "Not found in leaf node." << endl;
//         return nullptr; // entry not found, return nullptr
//         }
//     else {
//         // cout << "Recursively searching in subset[" << i << "]" << endl;
//         return subset[i]->find(entry); // recursively find the entry in the child node
//         }
//     }

// template <typename T>
// int BTree<T>::size() const {
//     int total_size = data_count;

//     for (int i = 0; i < child_count; ++i) {
//         if (subset[i] != nullptr) {
//             total_size += subset[i]->size();
//             }
//         }

//     return total_size;

//     }

// template <typename T>
// bool BTree<T>::empty() const {
//     return (data_count == 0 && child_count == 0);
//     }

// template <typename T>
// bool BTree<T>::is_valid() { // Check if the tree is valid
//     // Root is empty 
//     if (data_count == 0 && child_count == 0) {
//         return true;
//         }
//     // Check data count 
//     if (data_count > MAXIMUM) {
//         return false;
//         }
//     // Check children count
//     if (child_count != data_count + 1 && !is_leaf()) {
//         return false;
//         }
//     // Check all nodes recursively
//     for (int i = 0; i < child_count; ++i) {
//         if (subset[i] != nullptr && !subset[i]->is_valid()) {
//             return false;
//             }
//         }
//     return true;
//     }

// //ANCHOR - Print tree
// //---------------------------------------------------------------
// //      P R I N T  E T C.
// //---------------------------------------------------------------
// template <typename T>
// void BTree<T>::print_tree(int level, ostream & outs) const {
//     if (child_count > 0 && subset[child_count - 1] != nullptr) {
//         subset[child_count - 1]->print_tree(level + 1, outs);

//         }
//     outs << setw(4 * level) << "" << "⎴" << endl;

//     for (int i = data_count - 1; i >= 0; --i) {
//         outs << setw(4 * level) << "" << left << setw(4) << data[i] << endl;

//         if (i == 0) {
//             outs << setw(4 * level) << "" << "⎵" << endl;
//             }


//         if (i < child_count - 1 && subset[i] != nullptr) {
//             subset[i]->print_tree(level + 1, outs);
//             }
//         }

//     }


// template <typename T>
// ostream& operator<<(ostream & outs, const BTree<T>&print_me) {
//     print_me.print_tree(0, outs);
//     return outs;
//     }

// template <typename T>
// string BTree<T>::in_order() {
//     string result;

//     for (int i = 0; i < data_count; ++i) {
//         if (i < child_count && subset[i] != nullptr) {
//             result += subset[i]->in_order();
//             }
//         result += to_string(data[i]) + "|";
//         }

//     if (child_count > data_count && subset[data_count] != nullptr) {
//         result += subset[data_count]->in_order();
//         }

//     return result;
//     }

// //ANCHOR - loose_insert
// template <typename T>
// void BTree<T>::loose_insert(const T & entry) {
//     /*
//        int i = first_ge(data, data_count, entry);
//        bool found = (i<data_count && data[i] == entry);

//        three cases:
//          a. found: deal with duplicates
//          ! found:
//          b. leaf : insert entry in data at position i
//          c. !leaf: subset[i]->loose_insert(entry)
//                    fix_excess(i) if there is a need
//             |   found     |   !found        |
//       ------|-------------|-----------------|-------
//       leaf  |  a. Deal    | b: insert entry |
//             |     with    |    at data[i]   |
//       ------|  duplicates |-----------------|-------
//             |             | d: subset[i]->  |
//       !leaf |             |    loose_insert |
//             |             |    fix_excess(i)|
//       ------|-------------|-----------------|-------
//     */

//     //----------debugging output---------------------------------------------
//     DEBUG_PRINT("\nCalling loose_insert: [" << entry << "]");

//     //cout << "\n==========================================================" << endl;
//     DEBUG_PRINT("Before inserting: ");
//     DEBUG_PRINT("Current node data count: " << data_count);
//     DEBUG_PRINT("Current node child count: " << child_count);

//     if (data_count > 0) {
//         DEBUG_PRINT("Current node keys: ");
//         for (int j = 0; j < data_count; ++j) {
//             DEBUG_PRINT("data[" << j << "]: " << data[j]);
//             }
//         }
//     else {
//         DEBUG_PRINT("Current node has no keys.");
//         }

//     if (child_count > 0) {
//         DEBUG_PRINT("Current node subset addresses and their data:");
//         for (int j = 0; j < child_count; ++j) {
//             if (subset[j] != nullptr) {
//                 DEBUG_PRINT("subset[" << j << "] address: " << subset[j]);
//                 DEBUG_PRINT("subset[" << j << "] data count: " << subset[j]->data_count);
//                 for (int k = 0; k < subset[j]->data_count; ++k) {
//                     DEBUG_PRINT("subset[" << j << "]->data[" << k << "]: " << subset[j]->data[k]);
//                     }
//                 }
//             else {
//                 DEBUG_PRINT("subset[" << j << "] is nullptr");
//                 }
//             }
//         }
//     else {
//         DEBUG_PRINT("Current node has no subsets.");
//         }
//     //cout << "==========================================================\n" << endl;

//     //----------debugging output---------------------------------------------

//     // Find the index where the entry should be inserted
//     int i = first_ge(data, data_count, entry);
//     bool found = (i < data_count && data[i] == entry);

//     //----------debugging output---------------------------------------------
//     DEBUG_PRINT("found dup?: " << found);
//     //----------debugging output---------------------------------------------

//         // If duplicates are allowed and the entry already exists,
//         // update the existing entry
//     if (found && !dups_ok) {
//         success_flag = false;
//         return;
//         }

//     else if (is_leaf()) {
//         DEBUG_PRINT("Inserting entry into the leaf node");
//         ordered_insert(data, data_count, entry);
//         success_flag = true;
//         return;
//         }
//     else {
//         if (subset[i] == nullptr) {
//             subset[i] = new BTree<T>(dups_ok);
//             }

//         DEBUG_PRINT("Calling recursively loose_insert ");

//         subset[i]->loose_insert(entry);

//         if (subset[i]->data_count > MAXIMUM) {
//             fix_excess(i);
//             }
//         }
//     }




// //ANCHOR - fix_excess
// template <typename T>
// void BTree<T>::fix_excess(int i) {
//     //* this node's child i has one too many items: 3 steps: 
//     //* 1. add a new subset at location i+1 of this node 
//     //* 2. split subset[i] (both the subset array and the data array) and move half into 
//     //* subset[i+1] (this is the subset we created in step 1.) 
//     //* 3. detach the last data item of subset[i] and bring it and insert it into this node's data[] 
//     //* Note that this last step may cause this node to have too many items. This is OK. This will be 
//     //* dealt with at the higher recursive level. (my parent will fix it!)  

//     DEBUG_PRINT("\nCalling fix_excess ...");

//     /// Create a new right node
//     BTree<T>* right = new BTree<T>(dups_ok);

//     DEBUG_PRINT("New right node created at: " << right);

//     if (child_count == 0) {
//         subset[i + 1] = right;
//         child_count++;
//         }
//     else {
//         insert_item(subset, i + 1, child_count, right);
//         }
//     DEBUG_PRINT("Inserted new right node into subset at index: " << (i + 1));


//     // Debugging output for current data_count and child_count
//     //cout << "────────────────────────────────────────────────────────────────────────────────" << endl;
//     DEBUG_PRINT("after fix_excess,current node data_count " << data_count);
//     DEBUG_PRINT("after fix_excess,current node child_count  " << child_count);

//     DEBUG_PRINT("Current node data: ");
//     for (int j = 0; j < data_count; ++j) {
//         DEBUG_PRINT("data[" << j << "]: " << data[j]);
//         }

//     DEBUG_PRINT("Current node subset addresses and their data:");
//     for (int j = 0; j < child_count; ++j) {
//         DEBUG_PRINT("subset[" << j << "] address: " << subset[j]);
//         if (subset[j] != nullptr) {
//             DEBUG_PRINT("subset[" << j << "] data count: " << subset[j]->data_count);
//             for (int k = 0; k < subset[j]->data_count; ++k) {
//                 DEBUG_PRINT("subset[" << j << "]->data[" << k << "]: " << subset[j]->data[k]);
//                 }
//             }
//         }
//     //cout << "────────────────────────────────────────────────────────────────────────────────" << endl;


//     //Split the left child node's data and subset pointers into the right child node
//     split(subset[i]->data, subset[i]->data_count, subset[i + 1]->data, subset[i + 1]->data_count);


//     DEBUG_PRINT("Split data from subset[" << i << "] to subset[" << (i + 1) << "]");
//     if (!subset[i]->is_leaf()) {
//         DEBUG_PRINT("subset[" << i << "] is not a leaf node");
//         split(subset[i]->subset, subset[i]->child_count, subset[i + 1]->subset, subset[i + 1]->child_count);
//         DEBUG_PRINT("Split subset pointers from subset[" << i << "] to subset[" << (i + 1) << "]");
//         }

//     DEBUG_PRINT("\n!!!Addresses of subsets after splitting:");
//     //cout << "==========================================================" << endl;
//     for (int j = 0; j < child_count; ++j) {
//         DEBUG_PRINT("subset[" << j << "] address: " << subset[j]);
//         if (subset[j] != nullptr) {
//             DEBUG_PRINT("subset[" << j << "] data count: " << subset[j]->data_count);
//             DEBUG_PRINT("subset[" << j << "] child count: " << subset[j]->child_count);

//             for (int k = 0; k < subset[j]->data_count; ++k) {
//                 DEBUG_PRINT("subset[" << j << "]->data[" << k << "]: " << subset[j]->data[k]);
//                 }

//             // cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;


//             }
//         }
//     //cout << "==========================================================\n" << endl;


//     T middle;
//     DEBUG_PRINT("subset[" << i << "]->data_count before detach: " << subset[i]->data_count);
//     detach_item(subset[i]->data, subset[i]->data_count, middle);
//     DEBUG_PRINT("Middle item extracted: " << middle);
//     insert_item(data, i, data_count, middle);


//     // cout << "\nDEBUGGING OUTPUT-After detach_item and insert_item to parent" << endl;
//     // cout << "!!!!!!!!--------------------------------------------------------------------" << endl;
//     // DEBUG_PRINT("Current node data_count: " << data_count);
//     // DEBUG_PRINT("Current node child_count: " << child_count);
//     // cout << " Print each subset's data_count and child_count:" << endl;
//     // for (int j = 0; j < child_count; ++j) {
//     //     if (subset[j] != nullptr) {
//     //         DEBUG_PRINT("subset[" << j << "] data_count: " << subset[j]->data_count);
//     //         DEBUG_PRINT("subset[" << j << "] child_count: " << subset[j]->child_count);
//     //         }
//     //     else {
//     //         DEBUG_PRINT("subset[" << j << "] is nullptr");
//     //         }
//     //     }
//     // cout << "!!!!!!!!--------------------------------------------------------------------" << endl;



//     DEBUG_PRINT("fix_excess function done.<---");
//     }

// //ANCHOR - loose_remove
// template <typename T>
// void BTree<T>::loose_remove(const T & entry) {
//     /* four cases:
//           a. leaf && not found target: there is nothing to do
//           b. leaf && found target: just remove the target
//           c. not leaf and not found target: recursive call to loose_remove
//           d. not leaf and found: replace target with largest child of subset[i]

//              |   !found    |   found       |
//        ------|-------------|---------------|-------
//        leaf  |  a: nothing | b: delete     |
//              |     to do   |    target     |
//        ------|-------------|---------------|-------
//        !leaf | c: loose_   | d: replace    |
//              |    remove   |    w/ biggest |
//        ------|-------------|---------------|-------

//      */

//     cout << "Calling loose_remove: [" << entry << "]\n" << endl;

//     // Debugging output before finding the index
//     //cout << "────────────────────────────────────────────────────────────────────────────────" << endl;
//    // cout << "Before loose remove, current node data_count: " << data_count << ", child_count: " << child_count << endl;
//    // cout << "Current node data: ";
//    // for (int j = 0; j < data_count; ++j) {
//    //     cout << data[j] << " ";
//    //     }
//    // cout << endl;
//    // cout << "Current node subset addresses and their data:" << endl;
//    // for (int j = 0; j < child_count; ++j) {
//    //     cout << "subset[" << j << "] address: " << subset[j] << endl;
//    //     if (subset[j] != nullptr) {
//    //         cout << "subset[" << j << "] data count: " << subset[j]->data_count << endl;
//    //         for (int k = 0; k < subset[j]->data_count; ++k) {
//    //             cout << "subset[" << j << "]->data[" << k << "]: " << subset[j]->data[k] << endl;
//    //             }
//    //         cout << "subset[" << j << "] child addresses and their data:" << endl;
//    //         for (int l = 0; l < subset[j]->child_count; ++l) {
//    //             cout << "subset[" << j << "]->subset[" << l << "] address: " << subset[j]->subset[l] << endl;
//    //             if (subset[j]->subset[l] != nullptr) {
//    //                 cout << "subset[" << j << "]->subset[" << l << "]->data count: " << subset[j]->subset[l]->data_count << endl;
//    //                 for (int m = 0; m < subset[j]->subset[l]->data_count; ++m) {
//    //                     cout << "subset[" << j << "]->subset[" << l << "]->data[" << m << "]: " << subset[j]->subset[l]->data[m] << endl;
//    //                     }
//    //                 cout << "subset[" << j << "]->subset[" << l << "]->child addresses and their data:" << endl;
//    //                 for (int n = 0; n < subset[j]->subset[l]->child_count; ++n) {
//    //                     cout << "subset[" << j << "]->subset[" << l << "]->subset[" << n << "] address: " << subset[j]->subset[l]->subset[n] << endl;
//    //                     if (subset[j]->subset[l]->subset[n] != nullptr) {
//    //                         cout << "subset[" << j << "]->subset[" << l << "]->subset[" << n << "]->data count: " << subset[j]->subset[l]->subset[n]->data_count << endl;
//    //                         for (int o = 0; o < subset[j]->subset[l]->subset[n]->data_count; ++o) {
//    //                             cout << "subset[" << j << "]->subset[" << l << "]->subset[" << n << "]->data[" << o << "]: " << subset[j]->subset[l]->subset[n]->data[o] << endl;
//    //                             }
//    //                         }
//    //                     }
//    //                 }
//    //             }
//    //         }
//    //     }
//    // cout << "────────────────────────────────────────────────────────────────────────────────" << endl;

//     int i = first_ge(data, data_count, entry); // find the index of the first element in data that is greater than or equal to entry
//     bool found = (i < data_count && data[i] == entry);

//     // Add debug output to check the values of i and found
//     cout << "Index i: " << i << ", Found: " << (found ? "true" : "false") << endl;

//     //Case a and Case b: Leaf node
//     if (is_leaf()) {
//         if (!found) {
//             // **Case a**: Leaf node && entry not found=>Nothing to do.
//             cout << "Case a: Leaf node and entry not found. Nothing to do." << endl;
//             return;
//             }
//         else {
//             // **Case b**: Leaf node && entry found=>Deleting entry.
//             cout << "Case b: Leaf node and entry found. Deleting entry." << endl;
//             T temp;
//             delete_item(data, i, data_count, temp);
//             return;
//             }
//         }

//     // Case c and Case d: Non-leaf node
//     if (!found) {
//         //**Case C**: Non-leaf node and entry not found=>Recursively calling loose_remove.
//         //cout << "Case c: Non-leaf node and entry not found. Recursively calling loose_remove." << endl;
//         subset[i]->loose_remove(entry);

//         // Check for shortage
//         if (subset[i]->data_count < MINIMUM) {
//             //cout << "Fixing shortage in child node at index " << i << endl;
//             fix_shortage(i);
//             }
//         }
//     else {
//         // **Case d**: Non-leaf node and entry found=>Replacing with largest child.
//         // cout << "Case d: Non-leaf node and entry found. Replacing with largest child." << endl;
//         // cout << "subset[i]: " << subset[i] << endl;

//         subset[i]->remove_biggest(data[i]); //从 subset[i] 子树中找到最大元素，并用它替换当前节点中的 data[i]

//         if (subset[i]->data_count < MINIMUM) {
//             //cout << "Fixing shortage in child node at index " << i << endl;
//             fix_shortage(i);
//             }
//         }
//     }


// //ANCHOR - fix_shortage
// template <typename T>
// void BTree<T>::fix_shortage(int i) {
//     /*
//      * fix shortage in subtree i:
//      * if child i+1 has more than MINIMUM, rotate left
//      * elif child i-1 has more than MINIMUM, rotate right
//      * elif there is a right child, merge child i with next child
//      * else merge child i with left child
//      */
//      // cout << "\n\n!!!!!!~~~FIXING SHORTAGE~~~!!!!!!\n" << endl;
//      // cout << "Calling fixing shortage at node index: " << i << " with data_count: " << data_count << endl;
//      // cout << "Before fix_shortage, node data_count: " << data_count << ", child_count: " << child_count << endl;

//     if (i < child_count - 1 && subset[i + 1]->data_count > MINIMUM) {
//         //cout << "Calling Rotating left at index: " << i << endl;
//         rotate_left(i);
//         }
//     else if (i > 0 && subset[i - 1]->data_count > MINIMUM) {
//         // cout << "Calling Rotating right at index: " << i << endl;
//         rotate_right(i);
//         }
//     else if (i < child_count - 1) {
//         //cout << "Calling Merging with next subset i: " << i << endl;
//         merge_with_next_subset(i);
//         }
//     else {
//         // cout << "Caing Merging with subset i-1  " << (i - 1) << endl;
//         merge_with_next_subset(i - 1);
//         }
//     // cout << "\n\n!!!!!!~~~FIXING SHORTAGE Done~~~!!!!!!\n" << endl;

//     }

// //ANCHOR - remove_biggest
// template <typename T>
// void BTree<T>::remove_biggest(T & entry) {
//     // Keep looking in the last subtree (recursive)
//     // until you get to a leaf.
//     // Then, detach the last (biggest) data item
//     //
//     // after the recursive call, fix shortage.

//     cout << "Calling remove_biggest... " << "\n" << endl;

//     cout << "DEBUGGING OUTPUT----------------------------------------------------------------------------" << endl;
//     cout << "Entry: " << entry << endl;
//     cout << "Current node data_count: " << data_count << ", child_count: " << child_count << endl;
//     cout << "Current node data: ";
//     for (int i = 0; i < data_count; ++i) {
//         cout << data[i] << " ";
//         }
//     cout << endl;
//     cout << "DEBUGGING OUTPUT----------------------------------------------------------------------------" << endl;

//     if (is_leaf()) {
//         cout << "Node is a leaf. Detaching the biggest item." << endl;
//         if (data_count > 0) {
//             detach_item(data, data_count, entry);
//             cout << "Detached item: " << entry << endl;
//             return;
//             }
//         }
//     else {
//         cout << "@@@ Recursively calling remove_biggest on the last subtree. Node is not a leaf. " << endl;
//         cout << "subset[child_count - 1]: " << subset[child_count - 1] << endl;
//         subset[child_count - 1]->remove_biggest(entry);

//         if (subset[child_count - 1]->data_count < MINIMUM) {
//             cout << "Fixing shortage in the last subtree." << endl;
//             fix_shortage(child_count - 1);
//             }
//         }

//     // Debugging output after the operation
//     cout << "After remove_biggest, current node data_count: " << data_count << ", child_count: " << child_count << endl;
//     cout << "Current node data: ";
//     for (int i = 0; i < data_count; ++i) {
//         cout << data[i] << " ";
//         }
//     cout << endl;
//     }

// //ANCHOR - rotate_left
// template <typename T>
// void BTree<T>::rotate_left(int i) {
//     /*
//      * (0 < i < child_count) and (subset[i]->data_count > MINIMUM)
//      * subset[i-1] has only MINIMUM - 1 entries.
//      *
//      * item transfers from child[i] to child [i-1]
//      *
//      * FIRST item of subset[i]->data moves up to data to replace data[i-1],
//      * data[i-1] moves down to the RIGHT of subset[i-1]->data
//      *
//      *  i = 1:
//      *              [50 100]
//      *  [  ]        [65 75]       ....
//      *            [a]  [b]  [c]
//      *
//      *  65 move up to replace 50 (data[i])
//      *  65's child (its child 0) moves over to be the child of 50
//      *  50 moves down to the right of subset[i]->data
//      *
//      *              [65 100]
//      *  [50]         [ 75 ]       ....
//      *     [a]      [b]  [c]
//      *
//      *
//      *
//      *
//      */
//     cout << "Rotate left at node: " << i << " data_count: " << data_count << endl;

//     T first_item = subset[i + 1]->data[0];

//     for (int j = 0; j < subset[i + 1]->data_count - 1; ++j) {
//         subset[i + 1]->data[j] = subset[i + 1]->data[j + 1];
//         }

//     subset[i + 1]->data_count--;

//     cout << "Attaching data[" << i << "] to subset[" << i << "]" << endl;
//     attach_item(subset[i]->data, subset[i]->data_count, data[i]);
//     cout << "Attached item: " << data[i] << endl;

//     data[i] = first_item;
//     cout << "Updated data[" << i << "] to: " << data[i] << endl;

//     if (!subset[i + 1]->is_leaf()) {
//         BTree<T>* temp_child = subset[i + 1]->subset[0];
//         cout << "Moving first child of subset[" << (i + 1) << "] to end of subset[" << i << "]" << endl;
//         insert_item(subset[i]->subset, subset[i]->child_count, subset[i]->child_count, temp_child);
//         cout << "Moved child address: " << temp_child << endl;

//         delete_item(subset[i + 1]->subset, 0, subset[i + 1]->child_count, temp_child);
//         cout << "Deleted first child of subset[" << (i + 1) << "]" << endl;
//         }

//     // Debugging output after rotation
//     // cout << "After rotate_left, current node data_count: " << data_count << ", child_count: " << child_count << endl;
//     // cout << "Current node data: ";
//     // for (int j = 0; j < data_count; ++j) {
//     //     cout << data[j] << " ";
//     //     }
//     // cout << endl;
//     // cout << "Current node subset addresses and their data:" << endl;
//     // for (int j = 0; j < child_count; ++j) {
//     //     cout << "subset[" << j << "] address: " << subset[j] << endl;
//     //     if (subset[j] != nullptr) {
//     //         cout << "subset[" << j << "] data count: " << subset[j]->data_count << endl;
//     //         for (int k = 0; k < subset[j]->data_count; ++k) {
//     //             cout << "subset[" << j << "]->data[" << k << "]: " << subset[j]->data[k] << endl;
//     //             }
//     //         }
//     //     }
//     }
// //ANCHOR - rotate_right
// template <typename T>
// void BTree<T>::rotate_right(int i) {
//     /* (i < child_count - 1) and (subset[i]->data_count > MINIMUM)
//      * subset[i+ 1] has only MINIMUM - 1 entries.
//      *
//      * item transfers from child[i] to child [i+1]
//      *
//      * LAST item of subset[i]->data moves up to data to replace data[i],
//      * data[i] moves down to the LEFT of subset[i+1]->data
//      *
//      * i = 1
//      *                     [50 100]
//      *      [20 30]        [65 75]          [ ]
//      *  [..] [..] [..]   [a] [b] [c]        [..]
//      *
//      *  75 moves up to replace 100 (data[i])
//      *  75's child (its last child) moves over to be the (child 0) child of 100
//      *  100 moves down to subset[i]->data
//      *
//      *                     [50 75]
//      *      [20 30]          [65]          [100]
//      *  [..] [..] [..]     [a] [b]        [c] [..]
//      *
//      */

//      // cout << "Rotate right at node: " << i << " data_count: " << data_count << endl;

//     T temp;
//     // cout << "Detaching last item from subset[" << (i - 1) << "]" << endl;
//     detach_item(subset[i - 1]->data, subset[i - 1]->data_count, temp);
//     // cout << "Detached item: " << temp << endl;

//      //cout << "Inserting data[" << (i - 1) << "] to subset[" << i << "]" << endl;
//     insert_item(subset[i]->data, 0, subset[i]->data_count, data[i - 1]);
//     // cout << "Inserted item: " << data[i - 1] << endl;

//     data[i - 1] = temp;
//     // cout << "Updated data[" << (i - 1) << "] to: " << data[i - 1] << endl;

//     if (!subset[i - 1]->is_leaf()) {
//         BTree<T>* temp_child = subset[i - 1]->subset[subset[i - 1]->child_count - 1];
//         //cout << "Moving last child of subset[" << (i - 1) << "] to front of subset[" << i << "]" << endl;
//         insert_item(subset[i]->subset, 0, subset[i]->child_count, temp_child);
//         // cout << "Moved child address: " << temp_child << endl;

//         subset[i - 1]->child_count--;
//         // cout << "Deleted last child of subset[" << (i - 1) << "]" << endl;
//         }

//     // cout << "After rotate_right, current node data_count: " << data_count << ", child_count: " << child_count << endl;
//     // cout << "Current node data: ";
//     // for (int j = 0; j < data_count; ++j) {
//     //     cout << data[j] << " ";
//     //     }
//     // cout << endl;
//     // cout << "Current node subset addresses and their data:" << endl;
//     // for (int j = 0; j < child_count; ++j) {
//     //     cout << "subset[" << j << "] address: " << subset[j] << endl;
//     //     if (subset[j] != nullptr) {
//     //         cout << "subset[" << j << "] data count: " << subset[j]->data_count << endl;
//     //         for (int k = 0; k < subset[j]->data_count; ++k) {
//     //             cout << "subset[" << j << "]->data[" << k << "]: " << subset[j]->data[k] << endl;
//     //             }
//     //         }
//     //     }
//     }
// //ANCHOR - merge_with_next_subset
// template <typename T>
// void BTree<T>::merge_with_next_subset(int i) {
//     /*
//      *  Merge subset[i] with subset [i+1] with data[i] in the middle
//      *
//      *   1. remove data[i] from this object
//      *   2. append it to child[i]->data
//      *   3. Move all data items from subset[i+1]->data to subset[i]->data
//      *   4. Move all subset pointers from subset[i+1]->subset to subset[i]->subset
//      *   5. delete subset[i+1] (store in a temp ptr)
//      *   6. delete temp ptr
//      */
//      //cout << "Merging data from subset " << i << ": " << subset[i]->data[0] << " and subset " << (i + 1) << ": " << subset[i + 1]->data[0] << endl;

//     T middle;
//     delete_item(data, i, data_count, middle);
//     // cout << "Deleted item from data[" << i << "]: " << middle << endl;

//     attach_item(subset[i]->data, subset[i]->data_count, middle);
//     //cout << "subset[i]->data_count: " << subset[i]->data_count << endl;

//     // Debugging output for subset[i]'s data after attaching the middle item
//     //cout << "subset[" << i << "] data after attaching middle item: ";
//     for (int j = 0; j < subset[i]->data_count; ++j) {
//         cout << subset[i]->data[j] << " ";
//         }
//     cout << endl;


//     // Debugging output for subset[i] and subset[i+1] before merging
//    // cout << "subset[" << i << "] data before merging: ";
//     // for (int j = 0; j < subset[i]->data_count; ++j) {
//     //     cout << subset[i]->data[j] << " ";
//     //     }
//     // cout << endl;

//     //cout << "subset[i+1] is : " << subset[i + 1] << endl;

//     //cout << "subset[" << (i + 1) << "] data before merging: ";
//     for (int j = 0; j < subset[i + 1]->data_count; ++j) {
//         cout << subset[i + 1]->data[j] << " ";
//         }
//     cout << endl;

//     // Merge data from subset[i+1] to subset[i]
//     merge(subset[i]->data, subset[i]->data_count, subset[i + 1]->data, subset[i + 1]->data_count);
//     //cout << "Merged data from subset[" << (i + 1) << "] to subset[" << i << "]" << endl;

//     if (!subset[i]->is_leaf()) {
//         //cout << "subset[i] is not a leaf node,continue merge their child" << endl;
//         merge(subset[i]->subset, subset[i]->child_count, subset[i + 1]->subset, subset[i + 1]->child_count);

//         }


//     // Debugging output for subset[i] after merging
//     //cout << "subset[" << i << "] data after merging: ";
//     // for (int j = 0; j < subset[i]->data_count; ++j) {
//     //     cout << subset[i]->data[j] << " ";
//     //     }
//     // cout << endl;

//     if (!subset[i]->is_leaf()) {
//         for (int j = 0; j < subset[i + 1]->child_count; ++j) {
//             subset[i]->subset[subset[i]->child_count++] = subset[i + 1]->subset[j];
//             //cout << "Moved subset[" << (i + 1) << "]->subset[" << j << "] to subset[" << i << "]->subset[" << (subset[i]->child_count - 1) << "]" << endl;
//             }
//         }

//     BTree<T>* temp_ptr = subset[i + 1];
//     delete temp_ptr;
//     subset[i + 1] = nullptr;
//     //cout << "Deleted subset[" << (i + 1) << "]" << endl;

//     for (int j = i + 1; j < child_count - 1; ++j) {
//         subset[j] = subset[j + 1];
//         // cout << "Moved subset[" << (j + 1) << "] to subset[" << j << "]" << endl;
//         }

//     child_count--;
//     // cout << "Updated child_count: " << child_count << endl;

//      // cout << "Current node data: ";
//      // for (int k = 0; k < data_count; ++k) {
//      //     cout << data[k] << " ";
//      //     }
//      // cout << endl;
//     }

// #endif