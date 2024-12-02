#ifndef MYQUEUE_H
#define MYQUEUE_H

#include <iostream>
using namespace std;

#include "../../includes/node/node.h"
#include "../../includes/linked_list_functions/linkedlistfunctionsTemplated.h"
#include <memory>
template <typename T>
class Queue
    {
    public:
        class Iterator
            {
            public:
                friend class Queue;                               //give access to list to access _ptr
                Iterator() { _ptr = NULL; }                          //default ctor
                Iterator(node<T>* p) { _ptr = p; }                  //Point Iterator to where p is pointing to

                T operator *() //dereference operator
                    {
                    assert(_ptr != nullptr && "Attempting to dereference a null iterator.");
                    return _ptr->_item;
                    }

                bool is_null() { return _ptr == NULL; }            //true if _ptr is NULL
                friend bool operator !=(const Iterator& left, const Iterator& right) { return left._ptr != right._ptr; }
                friend bool operator ==(const Iterator& left, const Iterator& right) { return left._ptr == right._ptr; }


                //member operator:++it   or ++it = new_value
                Iterator& operator++() {
                    if (_ptr != NULL) {
                        _ptr = _ptr->_next;
                        }
                    return *this;

                    }

                //friend operator: it++
                friend Iterator operator++(Iterator& it, int unused) {
                    assert(it._ptr != NULL && "it is NULL");
                    Iterator temp = it;
                    ++it;
                    return temp;
                    }

            private:
                node<T>* _ptr;                          //pointer being encapsulated
            };

        Queue();
        Queue(const Queue<T>& copyMe);
        ~Queue();
        Queue& operator=(const Queue<T>& RHS);

        bool empty();
        T front();
        T back();

        void push(T item);
        T pop();

        Iterator begin() const;                                     //Iterator to the head node
        Iterator end() const;                                       //Iterator to NULL
        void print_pointers();
        int size() const { return _size; }

        template<typename TT>
        friend ostream& operator << (ostream& outs, const Queue<TT>& printMe);
    private:
        node<T>* _front;
        node<T>* _rear;
        int _size;
    };


template<typename T>
Queue<T>::Queue() : _front(nullptr), _rear(nullptr), _size(0) {}

template<typename T>
Queue<T>::Queue(const Queue<T>& copyMe) {
    _front = copyMe._front;
    _rear = _copy_list(_front, copyMe._front);
    _size = copyMe._size;

    }

template<typename T>
Queue<T>::~Queue() {
    _clear_list(_front);
    _rear = NULL;
    _size = 0;
    }

template<class T>
Queue<T> &Queue<T>::operator=(const Queue<T> &RHS) {
    if (this == &RHS) {
        return *this;
        }
    _clear_list(_front);
    _rear = _copy_list(_front, RHS._front);
    _size = RHS._size;
    return *this;
    }


template<typename T>
bool  Queue<T>::empty() { return _front == NULL; }

template<typename T>
T  Queue<T>::front() {
    assert(!empty() && "Queue is empty");
    return _front->_item;
    }

template<typename T>
T  Queue<T>::back() {
    assert(!empty() && "Queue is empty");
    return _rear->_item;
    }

template<typename T>
void Queue<T>::push(T item) {
    if (_rear == NULL) // if list is empty
        {
        _rear = _insert_head(_front, item); // only one element
        _front = _rear;
        }
    else {
        _rear = _insert_after(_front, _rear, item); // insert after _rear and update _rear
        }

    _size++; // don't forget change size
    }

template<typename T>
T Queue<T>::pop() {
    assert(!empty() && "Queue is empty!");
    T item = _delete_node(_front, _front);
    if (empty()) {
        _rear = NULL;
        }
    _size--;
    return item;
    }

template<typename T>
typename Queue<T>::Iterator Queue<T>::begin() const { return Iterator(_front); }

template<typename T>                                    //Iterator to the head node
typename Queue<T>::Iterator Queue<T>::end() const { return Iterator(NULL); }
//Iterator to NULL

template<typename T>
void Queue<T>::print_pointers() {
    cout << "Front: " << _front << ", Rear: " << _rear << endl;
    }


template<typename TT>
ostream& operator << (ostream& outs, const Queue<TT>& printMe) {
    outs << "Queue";
    _print_list(printMe._front);
    outs << endl;
    return outs;
    }



#endif 