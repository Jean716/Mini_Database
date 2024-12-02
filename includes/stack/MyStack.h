#ifndef MYSTACK_H
#define MYSTACK_H

#include <iostream>
using namespace std;

#include "../../includes/node/node.h"
#include "../../includes/linked_list_functions/linkedlistfunctionsTemplated.h"

template <typename T>
class Stack
    {
    public:
        class Iterator //The Iterator class within the Stack class is designed to provide an interface for iterating over the elements of the stack. 
            {
            public:
                friend class Stack;                 //Friend Declaration, allows the Stack class to access the _ptr member of the Iterator.

                Iterator() : _ptr(NULL) {}        //default ctor
                Iterator(node<T>* p) :_ptr(p) {}      //parameterized ctor

                T operator *()    //dereference operator
                    {
                    assert(_ptr != nullptr && "Attempting to dereference a null iterator.");
                    return _ptr->_item;
                    }

                //T operator *() {}
                bool is_null() { return _ptr == NULL; }   //true if _ptr is NULL, == not =
                friend bool operator !=(const Iterator& left, const Iterator& right) { return left._ptr != right._ptr; }
                friend bool operator ==(const Iterator& left, const Iterator& right) { return left._ptr == right._ptr; }

                // ++it Move Iterator to the next node
                Iterator& operator++() //member operator:++it  or ++it = new_value
                    {
                    if (_ptr != NULL) {
                        _ptr = _ptr->_next;
                        }
                    return *this;
                    }

                // it++ Move Iterator to the next node , but return to the pre Iterator
                friend Iterator operator++(Iterator& it, int unused) {        //friend operator: it++
                    assert(it._ptr != NULL);
                    Iterator temp = it;
                    ++it;
                    return temp;
                    }

            private:
                node<T>* _ptr;    //pointer being encapsulated
            };

        Stack();
        Stack(const Stack<T>& copyMe);
        ~Stack();
        Stack<T>& operator=(const Stack<T>& RHS);

        T top();
        bool empty();
        void push(T item);
        T pop();

        template<typename TT>
        friend ostream& operator<<(ostream& outs, const Stack<TT>& printMe);

        Iterator begin() const;                   //Iterator to the head node
        Iterator end() const;                     //Iterator to NULL
        int size() const { return _size; }

    private:
        node<T>* _top;
        int _size;
    };



template <typename T>
Stack<T>::Stack() :_top(NULL), _size(0) {}

template <typename T>
Stack<T>::Stack(const Stack<T>& copyMe) {
    _top = _copy_list(copyMe._top);
    _size = copyMe._size;
    }

template <typename T>
Stack<T>::~Stack() {
    _clear_list(_top);
    _size = 0;
    }

template <typename T>
Stack<T>& Stack<T>:: operator=(const Stack<T>& RHS) {
    if (this == &RHS) {
        return *this;
        }
    _clear_list(_top);
    _top = _copy_list(_top, RHS._top);
    _size = RHS._size;
    return *this;
    }

template <typename T>
T Stack<T>::top() {
    assert(_top != NULL && "Stack is empty");
    return _top->_item;
    }

template <typename T>
bool Stack<T>::empty() { return _top == NULL; }

template <typename T>
void Stack<T>::push(T item) {
    _insert_head(_top, item);
    _size++;
    }

template <typename T>
T Stack<T>::pop() {
    assert(_top != NULL && "Empty Linked List!");
    T item = _delete_node(_top, _top);
    _size--;
    return item;
    }


template<typename T>
ostream& operator<<(ostream& outs, const Stack<T>& printMe) {
    outs << "Stack";
    _print_list(printMe._top);
    outs << endl;
    return outs;
    }

template<typename T>
typename Stack<T>::Iterator Stack<T>::begin() const {
    return Iterator(_top);
    }

template<typename T>
typename Stack<T>::Iterator Stack<T>::end() const {
    return Iterator(NULL);
    };



#endif
