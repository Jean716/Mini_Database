#ifndef BTREE_ARRAY_FUNCTIONS_H
#define BTREE_ARRAY_FUNCTIONS_H

#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

#define DEBUG 0
#if DEBUG
#define DEBUG_PRINT(x) (std::cout << x << std::endl)
#else
#define DEBUG_PRINT(x)
#endif

//-----------------------------------Function Declarations---------------------------------------
template <class T>
T maximal(const T& a, const T& b);                      // return the larger of the two items

template <class T>
void swap(T& a, T& b);                                  // swap the two items

template <class T>
int index_of_maximal(T data[], int n);                  // return index of the largest item in data

template <class T>
void ordered_insert(T data[], int& n, T entry);         // insert entry into the sorted array data with length n

template <class T>
int first_ge(const T data[], int n, const T& entry);    // return the index of the first element in data that is not less than entry

template <class T>
void attach_item(T data[], int& n, const T& entry);     // append entry to the right of data

template <class T>
void insert_item(T data[], int i, int& n, T entry);     // insert entry at index i in data

template <class T>
void detach_item(T data[], int& n, T& entry);           // remove the last element in data and place it in entry

template <class T>
void delete_item(T data[], int i, int& n, T& entry);    // delete item at index i and place it in entry

template <class T>
void merge(T data1[], int& n1, T data2[], int& n2);     // append data2 to the right of data1

template <class T>
void split(T data1[], int& n1, T data2[], int& n2);     // move n/2 elements from the right of data1 and move to data2

template <class T>
void copy_array(T dest[], const T src[], int& dest_size, int src_size);  // copy src[] into dest[]

template <class T>
void print_array(const T data[], int n, int pos = -1);  // print array data

template <class T>
bool is_gt(const T data[], int n, const T& item);       // item > all data[i]

template <class T>
bool is_le(const T data[], int n, const T& item);       // item <= all data[i]



//-------------- Vector Extra operators: ---------------------
template <typename T>
ostream& operator<<(ostream& outs, const vector<T>& list);  // print vector list

template <typename T>
vector<T>& operator+=(vector<T>& list, const T& addme);     // list.push_back addme

//-----------------------------------Function Definitions-------------------------------------------------
template <class T>
T maximal(const T& a, const T& b) { // return the larger of the two items
    return (a > b) ? a : b;
    }

template <class T>
void swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
    }

template <class T>
int index_of_maximal(T data[], int n) { // return index of the largest item in data
    int max_index = 0;
    for (int i = 1; i < n; ++i) {
        if (data[i] > data[max_index]) { // if data[i] is greater than data[max_index]
            max_index = i;             // set max_index to i
            }
        }
    return max_index;
    }

template <class T>
void ordered_insert(T data[], int& n, T entry) {  // insert entry into the sorted array data with length n

    DEBUG_PRINT("Ordered_insert Function Fired!");
    //cout << "\nCalling ordered_insert with entry: " << entry << endl;

    int index = first_ge(data, n, entry); // find the index of the first element in data that is not less than entry

    for (int i = n; i > index; --i) {
        data[i] = data[i - 1];
        }

    data[index] = entry;
    ++n;


    //DEBUG_PRINT("After ordered_insert, data array is:");
    // for (int i = 0; i < n; ++i) {
    //     DEBUG_PRINT("data[" << i << "]: " << data[i]);
    //     }
    // 
    }


//ANCHOR - first_ge
template <class T>
int first_ge(const T data[], int n, const T & entry) {  // return the index of the first element in data that is not less than entry
    // cout << "\nCalling first_ge with entry: " << entry << endl;
    int i = 0;

    // cout << "curent data array is : ";
    // for (int j = 0; j < n; ++j) {
    //     cout << data[j] << " ";
    //     }
    // cout << endl;

    while (i < n && data[i] < entry) {
        i++;
        }

    // if (i < n) {
    //     cout << "OK,first_ge index found: " << i << endl;
    //     }
    // else {
    //     cout << "No element found greater than or equal to entry: " << entry << ". Returning index: " << n << endl;  // 未找到符合条件的元素
    //     }

    return i;
    }


template <class T>
void attach_item(T data[], int& n, const T & entry) { // append entry to the right of data
    data[n] = entry;
    n++;
    }

template <class T>
void insert_item(T data[], int i, int& n, T entry) { // insert entry at index i in data
    DEBUG_PRINT("Insert_item Function Fired!");
    assert(i >= 0 && i <= n);
    if (i < 0 || i > n) {
        cout << "Error: Index out of bounds" << endl;
        return;
        }

    // Output the array before insertion
    // cout << "Array before insertion: ";
    // for (int k = 0; k < n; ++k) {
    //     cout << data[k] << " ";
    //     }
    // cout << endl;

    for (int j = n; j > i; --j) { // shift data[i] to the right
        data[j] = data[j - 1];
        }
    data[i] = entry;
    ++n;

    // Output the array after insertion
    // cout << "Array after insertion: ";
    // for (int k = 0; k < n; ++k) {
    //     cout << data[k] << " ";
    //     }
    // cout << endl;
    // cout << "insert_item completed" << endl;
    }

//ANCHOR - detach_item
template <class T>
void detach_item(T data[], int& n, T & entry) {
    // cout << "Calling detach_item..." << endl;
    // cout << "Before detach_item: n = " << n << endl;
    if (n > 0) {
        entry = data[n - 1];
        n--;
        }

    data[n] = T(); // set the last element to default value
    // cout << "After detach_item: n = " << n << endl;
    }



template <class T>
void delete_item(T data[], int i, int& n, T & entry) {
    DEBUG_PRINT("Delete_item Function Fired!");
    DEBUG_PRINT("Deleting item at index " << i << ", n: " << n);
    DEBUG_PRINT("Deleting item: " << data[i]);

    entry = data[i]; // place the item in entry
    if (i == n - 1) {
        cout << "Deleting last/only element: " << data[i] << endl;

        }
    else {
        cout << "Deleting the first/middle element: " << data[i] << endl;
        for (int j = i; j < n; ++j) {
            data[j] = data[j + 1];
            }

        data[n] = T(); // set the last element to default value

        }
    n--; // reduce the size of the array


    DEBUG_PRINT("Data after deletion: ");
    for (int k = 0; k < n; ++k) {
        DEBUG_PRINT(data[k] << " - ");
        }
    }

template <class T>
void merge(T data1[], int& n1, T data2[], int& n2) { // append data2 to the right of data1
    DEBUG_PRINT("Calling merge: n1 = " << n1 << ", n2 = " << n2);
    for (int i = 0; i < n2; ++i) {
        data1[n1] = data2[i]; // append data2 to the right of data1
        n1++;
        }
    n2 = 0;
    }

//ANCHOR - split
template <class T>
void split(T data1[], int& n1, T data2[], int& n2) { // move n/2 elements from the right of data1 and move to data2
    //cout << "Calling split: n1 = " << n1 << ", n2 = " << n2 << endl;

     //Check if n1 is even or odd
    bool is_odd = (n1 % 2 != 0) ? true : false;
    int mid = n1 / 2;
    if (is_odd) {
        // For odd, split in the middle, giving more elements to data1
        n2 = n1 - mid - 1;
        n1 = mid + 1;
        for (int i = 0; i < n2; ++i) { // copy the right half of data1 to data2
            data2[i] = data1[mid + i + 1];
            }

        }
    else {
        // For even, split equally
        n2 = n1 - mid;
        n1 = mid;
        for (int i = 0; i < n2; ++i) { // copy the right half of data1 to data2
            data2[i] = data1[mid + i];
            }
        }

    }

template <class T>
void copy_array(T dest[], const T src[], int& dest_size, int src_size) { // copy src[] into dest[]
    for (int i = 0; i < src_size; ++i) {
        dest[i] = src[i];
        }
    dest_size = src_size;

    }

template <class T>
void print_array(const T data[], int n, int pos) { // print array data
    for (int i = 0; i < n; ++i) {
        if (i == pos) {
            cout << "[" << data[i] << "] ";
            }
        else {
            cout << data[i] << " ";
            }
        }
    cout << endl;
    }

template <class T>
bool is_gt(const T data[], int n, const T & item) { // item > all data[i]
    for (int i = 0; i < n; ++i) {
        if (item <= data[i]) {
            return false;
            }
        }
    return true;
    }

template <class T>
bool is_le(const T data[], int n, const T & item) {
    for (int i = 0; i < n; ++i) {
        if (item > data[i]) {
            return false;
            }
        }
    return true;
    }

template <typename T>
ostream& operator<<(ostream & outs, const vector<T>&list) { // print vector list
    for (size_t i = 0; i < list.size(); ++i) {
        outs << list[i];
        if (i != list.size() - 1) {
            outs << " ";
            }
        }
    return outs;
    }

template <typename T>
vector<T>& operator+=(vector<T>&list, const T & addme) { // list.push_back addme
    list.push_back(addme);
    return list;
    }

template <class T>
void remove_entry(T data[], int& n, int index) {

    assert(index >= 0 && index < n);

    if (index == n - 1) {
        n--;
        return;
        }

    for (int j = index; j < n - 1; ++j) {
        data[j] = data[j + 1];
        }

    n--;


    }




#endif // BTREE_ARRAY_FUNCTIONS_H