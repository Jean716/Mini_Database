#ifndef NODE_H  // prevent multiple inclusions of the header file
#define NODE_H  // Define the header file

#include <iostream> // Header file for input-output stream library
using namespace std; // Use standard namespace

// template class node
template <class T>  // Define template class, T is a placeholder which is the type of the item in the node
struct node
    {
    T _item; // The item stored in the node
    node<T>* _next;  // Pointer to the next node
    node<T>* _prev;  // Pointer to the previous node

    //Constructor to initialize the node

    //NOTE - about const and &  
    /*
    - const T& item = T()
    - const： Indicates that the passed parameter item is a constant,
            meaning it cannot be modified within the function.
    - &：Indicates that the parameter is passed by reference, not by copy.
         This avoids the overhead of copying the object,
         especially when the object of type T is large
    */
    node(const T& item = T(), node<T>* next = NULL, node<T>* prev = NULL) :
        _item(item),
        _next(next),
        _prev(prev) {
        }

    //Overload output operator to output node content)
    friend ostream& operator<< (ostream& outs, const node<T>& print_me) {
        outs << "<-[" << print_me._item << "]->";
        return outs;
        }
    };

#endif // End for #ifndef 