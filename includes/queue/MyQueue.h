#ifndef MYQUEUE_H
#define MYQUEUE_H

#include <iostream>
#include <cassert>
#include "../../includes/node/node.h"
#include "../../includes/linked_list_functions/linked_list_functions.h"

template <typename T>
class Queue
    {
    public:
        class Iterator
            {
            public:
                friend class Queue;          //give access to list to access _ptr
                Iterator() :_ptr(nullptr) {}                //default ctor
                Iterator(node<T>* p) : _ptr(p) {}       //Point Iterator to where

                // Dereference operator
                T& operator*()  // return the item value itself
                    {
                    assert(_ptr != nullptr && "Attempting to dereference a null iterator.");
                    return _ptr->_item;
                    };

                //member access operator                         
                T* operator->() // return address of sth
                    {
                    assert(_ptr != nullptr && "Attempting to access a member of a null iterator.");
                    return &(_ptr->_item);
                    };

                // Check if iterator points to null
                bool is_null() {
                    return _ptr == nullptr;
                    };

                // Inequality operator
                friend bool operator!=(const Iterator &left, const Iterator &right) {
                    return left._ptr != right._ptr;
                    }

                // Equality operator
                friend bool operator==(const Iterator &left, const Iterator &right) {
                    return left._ptr == right._ptr;
                    }

                //prefix operator: ++it
                Iterator& operator++() {
                    assert(_ptr != nullptr && "Attempting to increment a null iterator.");

                    _ptr = _ptr->_next;

                    return *this;
                    };


                //friend operator: it++
                friend Iterator operator++(Iterator &it, int unused) {
                    Iterator hold = it; // make a copy of the original iterator
                    it._ptr = it._ptr->_next;
                    return hold;  //  return the copy of the original iterator
                    };
                //  p is pointing to

            private:
                node<T>* _ptr;               //pointer being encapsulated
            };

        Queue();

        Queue(const Queue<T>& copyMe);
        ~Queue();
        Queue& operator=(const Queue<T>& RHS);

        bool empty() const;
        T front();
        T back() const;

        void push(T item);
        T pop();

        Iterator begin() const;            //Iterator to the head node
        Iterator end() const;              //Iterator to NULL

        void print_pointers();
        int size() const { return _size; } //Returns the number of elements in the Queue

        template<typename TT>
        friend ostream& operator << (ostream& outs, const Queue<TT>& printMe);
    private:
        node<T>* _front; //  front of the queue
        node<T>* _rear; //  rear of the queue
        int _size; //  size of the queue
    };





//ANCHOR - default ctor
template<typename T>
Queue<T>::Queue() : _front(nullptr), _rear(nullptr), _size(0) {}

/*========================================================================================================================*/
//ANCHOR - BIG 3
template<typename T>
Queue<T>& Queue<T>::operator=(const Queue<T>& RHS) {
    if (this != &RHS) {
        _clear_list(_front); //  clear the list
        _front = _copy_list(RHS._front); //  copy the list
        _rear = _last_node(_front); //  update rear
        _size = RHS._size; //  update size
        }

    return *this;
    }
template<typename T>
Queue<T>::~Queue() {
    _clear_list(_front); //  clear the list
    _rear = nullptr; // update rear
    _size = 0;  //  update size

    }

template<typename T>
Queue<T>::Queue(const Queue<T>& copyMe) {
    _front = _copy_list(copyMe._front);
    _rear = _last_node(_front);
    _size = copyMe._size;
    }


/*========================================================================================================================*/

template<typename T>
bool Queue<T>::empty() const {
    return _front == nullptr; //  if front is null, then the queue is empty
    }

template<typename T>
T Queue<T>::front() {
    assert(!empty() && "Queue is empty");
    return _front->_item;
    }

template<typename T>
T Queue<T>::back() const {
    assert(!empty() && "Queue is empty");
    return _rear->_item;
    }

template<typename T>
void Queue<T>::push(T item) //  Add an item to the rear of the queue
    {
    if (empty()) {
        _insert_head(_front, item);
        _rear = _front;
        }
    else {
        _insert_after(_front, _rear, item); // push the new node after the rear
        _rear = _rear->_next; // update the rear
        }
    _size++;
    }

template<typename T>
T Queue<T>::pop() // Removes the front element of the queue
    {
    assert(!empty() && "Queue is empty");

    T item = _delete_node(_front, _front);    // delete the front node

    if (_front == nullptr) {
        _rear = nullptr;     // if after deleting the front node, the front is null, 
        //then the rear should be null
        }

    _size--;                 // update the size
    return item;
    }


template<typename T>
typename Queue<T>::Iterator Queue<T>::begin() const {
    return Iterator(_front);
    }

template<typename T>
typename Queue<T>::Iterator Queue<T>::end() const {
    return Iterator(nullptr);
    }


template<typename T>
void Queue<T>::print_pointers() {
    cout << "Front: " << _front << ", Rear: " << _rear << endl;
    }

template<typename TT>
ostream& operator << (ostream& outs, const Queue<TT>& printMe) {
    outs << "Queue: head->";
    for (typename Queue<TT>::Iterator it = printMe.begin(); it != printMe.end(); ++it) {
        outs << "[" << **it << "]-> ";
        }
    outs << "|||";
    return outs;
    }


#endif