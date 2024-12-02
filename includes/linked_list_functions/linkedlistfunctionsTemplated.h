#ifndef LINKEDLISTFUNCTIONSTEMPLATED_H
#define LINKEDLISTFUNCTIONSTEMPLATED_H

#include "../../includes/node/node.h"
#include <cassert>

//Linked List General Functions:
template <typename T>
void _print_list(node<T>* head);

//recursive fun! :)
template <typename T>
void _print_list_backwards(node<T> *head);

//return ptr to key or NULL
template <typename T>
node<T>* _search_list(node<T>* head, T key);


template <typename T>
node<T>* _insert_head(node<T> *&head, T insert_this);

//insert after ptr: insert head if marker null
template <typename T>
node<T>* _insert_after(node<T>*& head, node<T> *after_this, T insert_this);

//insert before ptr: insert head if marker null
template <typename T>
node<T>* _insert_before(node<T>*& head, node<T>* before_this, T insert_this);

//ptr to previous node
template <typename T>
node<T>* _previous_node(node<T>* prev_to_this);

//delete, return item
template <typename T>
T _delete_node(node<T>*& head, node<T>* delete_this);

//duplicate the list...
template <typename T>
node<T>* _copy_list(node<T>* head);

//duplicate the list, return pointer to last node in dest... 
//     use this function in your queue big three 
template <typename T>
node<T> *_copy_list(node<T> *&dest, node<T> *src);


//delete all the nodes
template <typename T>
void _clear_list(node<T>*& head);


//_item at this position
template <typename T>
T& _at(node<T>* head, int pos);

/*========================================================================================================================*/
template <typename T>
void _print_list(node<T>* head) {

    node<T>* current = head;
    cout << "Head->";
    while (current != NULL) {
        cout << *current;
        current = current->_next;
        }
    cout << "|||";

    }

//recursive fun! :)
template <typename T>
void _print_list_backwards(node<T> *head) {
    if (head == NULL) return;
    _print_list_backwards(head->_next);
    cout << *head;
    }

//return ptr to key or NULL
template <typename T>
node<T>* _search_list(node<T>* head, T key) {
    node<T>* current = head; // creat a walker pointer with node<T> type;

    while (current != NULL) // traverse the linked list
        {
        if (current->_item == key) {
            return current;       // return current if find the key
            }
        current = current->_next; // don't forget move the walker to the next
        }

    return  nullptr;      // return nullptr is not fine the key
    }

//----------------------------------------------------------
template <typename T>
node<T>* _insert_head(node<T> *&head, T insert_this) {
    node<T>* new_node = new node<T>(insert_this); // Creat a new node with the given item(insert_this)
    new_node->_next = head;
    if (head != NULL)   // if linked list is not empty
        {
        head->_prev = new_node;
        }
    head = new_node; // change the head 
    return head;
    }


//insert after ptr: insert head if marker null
template <typename T>
node<T>* _insert_after(node<T>*& head, node<T> *after_this, T insert_this) {
    if (after_this == NULL) // the List is empty
        {
        return _insert_head(head, insert_this); // insert the new node at the head of the list
        }
    node<T>* new_node = new node<T>(insert_this);
    new_node->_next = after_this->_next;
    if (after_this->_next != NULL) {
        after_this->_next->_prev = new_node;
        }
    new_node->_prev = after_this;
    after_this->_next = new_node;

    return head;
    }

//insert before ptr: insert head if marker null
template <typename T>
node<T>* _insert_before(node<T>*& head, node<T>* before_this, T insert_this) {
    if (before_this == NULL) // the List is empty
        {
        return _insert_head(head, insert_this);
        }
    return _insert_after(head, _previous_node(before_this), insert_this);

    }
//----------------------------------------------------------
//ptr to previous node
template <typename T>
node<T>* _previous_node(node<T>* prev_to_this) {
    assert(prev_to_this != NULL && "Linked List is empty");
    return prev_to_this->_prev;
    }

//delete, return item
template <typename T>
T _delete_node(node<T>*& head, node<T>* delete_this) {
    assert(delete_this != NULL && "delete_this is NULL");

    T item = delete_this->_item;

    if (delete_this == head)  // delete_this is the head
        {
        head = delete_this->_next;
        }
    else if (delete_this->_next == NULL)  // delete_this is the tail
        {
        delete_this->_prev->_next = NULL;
        }
    else  // delete_this is in the middle of the linked list
        {
        delete_this->_prev->_next = delete_this->_next;
        delete_this->_next->_prev = delete_this->_prev;
        }

    delete delete_this;
    return item;
    }

//duplicate the list...
template <typename T>
node<T>* _copy_list(node<T>* head) {
    if (head == NULL) {
        return NULL;
        }

    node<T>* new_head = NULL;
    node<T>* current_new = new_head;
    node<T>* current_old = head;
    while (current_old != NULL) {
        current_new = _insert_after(new_head, current_new, current_old->_item);
        current_old = current_old->_next;
        }
    return new_head;

    }

//duplicate the list, return pointer to last node in dest... 
//     use this function in your queue big three 
template <typename T>
node<T> *_copy_list(node<T> *&dest, node<T> *src) {
    dest = _copy_list(src);
    if (dest == NULL) {
        return NULL;
        }

    node<T>* current = dest;
    while (current->_next != NULL) {
        current = current->_next;
        }

    return current;
    }

//delete all the nodes
template <typename T>
void _clear_list(node<T>*& head) {
    node<T>* current = head;
    while (current != NULL) {
        node<T>* temp = current;
        current = current->_next;
        delete temp;
        }
    head = NULL;
    }


//_item at this position
template <typename T>
T& _at(node<T>* head, int pos) {
    node<T>* current = head;
    for (int i = 0; i < pos; i++) {
        current = current->_next;
        }
    return current->_item;


    }


#endif



