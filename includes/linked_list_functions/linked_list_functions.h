#ifndef LINKED_LIST_FUNCTIONS_H
#define LINKED_LIST_FUNCTIONS_H
#include <iostream>
#include "../../includes/node/node.h"

#include <cassert>
using namespace std;


/*==================================================== Function Declaration====================================================*/
template <typename T>
node<T>* _insert_head(node<T> *&head, T insert_this);
template <typename T>
node<T>* _insert_after(node<T>*& head, node<T> *after_this, T insert_this);
template <typename T>
node<T>* _insert_before(node<T>*& head, node<T>* before_this, T insert_this);


template <typename T>
node<T>* _search_list(node<T>* head, T key);  //return ptr to key or NULL
template <typename T>
node<T>* _previous_node(node<T>* head, node<T>* prev_to_this);

//delete, return item
template <typename T>
T _delete_node(node<T>*&head, node<T>* delete_this);

template <typename T>
node<T>* _copy_list(node<T>* head);
//duplicate list and return the last node of the copy
template <typename T>
node<T> *_copy_list(node<T>* &dest, node<T> *src);

//delete all the nodes
template <typename T>
void _clear_list(node<T>*& head);

//_item at this position
template <typename T>
T& _at(node<T>* head, int pos);

template <typename T>
void _print_list(node<T>* head);

//recursive fun! :
template <typename T>
void _print_list_backwards(node<T> *head);

//. . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .
//      Sorted List Routines. order: 0: ascending, order: other: descending
//                              Assume a Sorted List
//. . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .

template <typename T>
node<T>* _insert_sorted(node<T>* &head, T item, bool ascending = true);//insert

//insert or add if a dup
template <typename T>
node<T>* _insert_sorted_and_add(node<T>* &head, T item, bool ascending);

//node after which this item goes order: 0 ascending
template <typename T>
node<T>* _where_this_goes(node<T>* head, T item, bool ascending);

//Last Node in the list
template <typename T>
node<T>* _last_node(node<T>* head);            //never use this function.

/*==================================================== END OF Function Declaration====================================================*/




//ANCHOR -1 ***Insert***
/**=======================================================================================================================
 *                                                   Insert Functions
 *=======================================================================================================================**/
 //STUB -  Insert Head
template <typename T>
node<T>* _insert_head(node<T> *&head, T insert_this) {
    node<T>* temp = new node<T>(insert_this); // create a new node
    temp->_next = head; //  point the new node to the head
    head = temp; //  make the new node the head
    return head;
    }

/*============================ END OF Function ============================*/

//STUB - Previous Node  
//ptr to previous node

template <typename T>
node<T>* _previous_node(node<T>*head, node<T>*prev_to_this) {

    for (node<T>* w = head; w != nullptr; w = w->_next) //  traverse the list
        {
        if (w->_next == prev_to_this)  // prev_to_this in the list
            {
            return w; //  return the previous node
            }

        }
    return nullptr; //  return nullptr if prev_to_this is not in the list
    }

/*============================ END OF Function ============================*/

//STUB - Insert After   
//insert after ptr
template <typename T>
node<T>* _insert_after(node<T>*& head, node<T>* after_this, T insert_this) {

    node<T>* temp = new node<T>(insert_this); //  create a new node

    if (head == nullptr) //  if list is empty, create a new node and make it the head
        {
        _insert_head(head, insert_this);
        }
    //  if the list is not empty, insert the new node after the specified node
    temp->_next = after_this->_next;
    after_this->_next = temp;

    return head;
    }



/*============================ END OF Function ============================*/
//STUB - Insert Before
//insert before ptr
template <typename T>
node<T>* _insert_before(node<T>*&head, node<T>*before_this, T insert_this) {
    // if before_this is the head or the list is empty, insert the new node at the head
    if (before_this == head || head == nullptr) {
        return _insert_head(head, insert_this);
        }

    // // find the previous node
    // node<T>* prev = _previous_node(head, before_this);
    // if (prev != nullptr)
    //     {
    //     // insert the new node after the previous node
    //     return _insert_after(head, prev, insert_this);
    //     }
    _insert_head(before_this, insert_this);
    // if the previous node is not found, return nullptr
    return nullptr;
    }

//ANCHOR -2 ***SEARCH***
/**=======================================================================================================================
 *                                                   Search Functions
 *=======================================================================================================================**/
 //STUB - _search_list
 //return ptr to key or NULL
template <typename T>
//STUB - Search List
//return ptr to key or nullptr
node<T>* _search_list(node<T>*head, T key) {

    for (node<T>* w = head; w != nullptr; w = w->_next) {
        if (w->_item == key)
            return w;
        }

    return nullptr;
    }


//ANCHOR -3 ***Delete***
/**=======================================================================================================================
 *                                                   Delete Functions
 *=======================================================================================================================**/
 //STUB - Delete Node
 //delete, return item
template <typename T>
T _delete_node(node<T>*&head, node<T>*delete_this) {
    T item = delete_this->_item; //  store the item to be deleted

    if (delete_this == head) //  if the node to be deleted is the head
        {
        head = delete_this->_next;
        }
    else {
        node<T>* prevNode = _previous_node(head, delete_this);
        prevNode->_next = delete_this->_next; //  point the previous node to the next node
        }
    delete delete_this; //  delete the node
    return item;
    }
/*============================ END OF Function ============================*/




//ANCHOR -4 ***Copy***
/**=======================================================================================================================
 *                                                   Copy Functions
 *=======================================================================================================================**/
 //STUB - Duplicate List  
template <typename T>
node<T>* _copy_list(node<T>*head) {
    if (head == nullptr)
        return nullptr;

    node<T>* new_head = new node<T>(head->_item); //  create a new node
    node<T>* current = new_head; //  point to the new node
    node<T>* original = head->_next; //  point to the next node in the original list

    while (original != nullptr) //  traverse the original list
        {
        current->_next = new node<T>(original->_item); //  create a new node
        current = current->_next;  //  point to the new node
        original = original->_next; //  point to the next node in the original list
        }

    return new_head;
    }

/*============================ END OF Function ============================*/
//STUB - Copy List
//duplicate list and return the last node of the copy
template <typename T>
node<T>* _copy_list(node<T>*&dest, node<T> *src) {
    dest = _copy_list(src);

    if (dest == nullptr)
        return nullptr;

    node<T>* last = dest;
    while (last->_next != nullptr)
        last = last->_next;

    return last;
    }

//ANCHOR -5 ***Clear***
/**=======================================================================================================================
 *                                                   Clear Functions
 *=======================================================================================================================**/
 //STUB _clear_list
template <typename T>
void _clear_list(node<T>*&head) {
    while (head != nullptr) {
        node<T>* to_delete = head;
        head = head->_next;
        delete to_delete;
        }
    }

//ANCHOR -6 ***Found***
//STUB - _at
/**=======================================================================================================================
 *                                                   At Functions
 *=======================================================================================================================**/
 // Returns the element at the specified position in the linked list
template <typename T>
T& _at(node<T>*head, int pos) {
    assert(pos >= 0 && "_at: position cannot be negative"); //  check if the position is negative
    node<T>* walker = head;
    for (int count = 0; walker != nullptr; walker = walker->_next, ++count) {
        if (count == pos) {
            return walker->_item;
            }
        }
    throw out_of_range("Position out of range"); //  throw an exception if the position is out of range

    }


/*============================ END OF Function ============================*/

/*============================ END OF Function ============================*/
//STUB - _last_node
// Returns the last node set of the linked list
template <typename T>
node<T>* _last_node(node<T>*head) {
    node<T>* lastNode = head;
    while (lastNode != nullptr && lastNode->_next != nullptr) {
        lastNode = lastNode->_next;
        }
    return lastNode;
    }

//ANCHOR -7 ***Sorted***
/**=======================================================================================================================
 *                                                   Sorted Functions
 *=======================================================================================================================**/
 //STUB - Insert Sorted
  // Inserts elements into a sorted linked list
template <typename T>
node<T>* _insert_sorted(node<T>*&head, T item, bool ascending) {
    //  if the list is empty or the new item is less than the head, insert the new item at the head
    node<T>* newNode = new node<T>(item);
    if (head == nullptr || (ascending ? head->_item > item : head->_item < item)) {
        newNode->_next = head;
        head = newNode;
        }
    else {
        node<T>* insertPos = _where_this_goes(head, item, ascending);
        newNode->_next = insertPos->_next;
        insertPos->_next = newNode;
        }
    return head;
    }
/*============================ END OF Function ============================*/
//STUB - Insert Sorted and Add
// Add the element if it already exists; Otherwise, insert the element
template <typename T>
node<T>* _insert_sorted_and_add(node<T>*&head, T item, bool ascending) {
    if (!head) {
        return _insert_head(head, item);
        }

    node<T>* newNode = new node<T>(item);
    node<T>* insertPos = _where_this_goes(head, item, ascending);

    if (insertPos->_next && insertPos->_next->_item == item) {
        // If the next item is the target item, add to it
        insertPos->_next->_item += item;
        delete newNode; // Clean up the unused new node
        }
    else {
        // Insert the new node
        newNode->_next = insertPos->_next;
        insertPos->_next = newNode;
        }
    return head;
    }

/*============================ END OF Function ============================*/

//STUB - _where_this_goes
// Returns the position where the element should be inserted
template <typename T>
node<T>* _where_this_goes(node<T>*head, T item, bool ascending) {
    node<T>* current = head;
    //  traverse the list until the next node is greater than the item
    while (current->_next != nullptr && (ascending ? current->_next->_item <= item : current->_next->_item > item)) {
        current = current->_next;
        }
    return current;
    }



//ANCHOR -8  ***Print***
/**=======================================================================================================================
 *                                                   Print Functions
 *=======================================================================================================================**/

 //STUB - Print List
template <typename T>
void _print_list(node<T>*head) {

    for (node<T>* w = head; w != nullptr; w = w->_next) {
        cout << "[" << w->_item << "]-> ";

        }
    cout << "|||" << endl;

    }

/*============================ END OF Function ============================*/

//STUB - Print List Backwards
template <typename T>
void _print_list_backwards(node<T>*head) {
    if (head == nullptr) {
        cout << "|||";
        return;
        }

    _print_list_backwards(head->_next); //  recursive call
    cout << "<-[" << head->_item << "] ";
    }
/*============================ END OF Function ============================*/

#endif