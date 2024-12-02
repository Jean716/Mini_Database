// utilities.cpp
#include "utilities.h"
#include <vector>
#include <string>
#include <fstream>
#include <iostream>
#include <stdexcept>
#include "../../includes/parser/typedefs.h"
using namespace std;

bool file_exists(const char filename[]) {
    fstream f;
    f.open(filename, fstream::in | fstream::binary); // open file for reading
    if (f.fail()) { // check if file exists
        return false;
        }
    f.close();
    return true;
    }

// void open_fileRW(fstream& f, const char filename[]) { // open file for reading and writing
//     cout << "open_fileRW fired!" << endl;
//     try {
//         cout << "Checking file: " << filename << endl;
//         if (!file_exists(filename)) { // check if file exists
//             f.open(filename, fstream::out | fstream::binary); // create file
//             if (f.fail()) {
//                 throw "file RW failed";
//                 }
//             }
//         f.open(filename, fstream::in | fstream::out | fstream::binary);
//         if (f.fail()) {
//             throw "file failed to open.";
//             }
//         }
//     catch (const char* e) {
//         cerr << "Exception: " << e << endl;
//         throw;
//         }
//     }

void open_fileRW(fstream& file, const char* filename) {
    cout << "Opening file: " << filename << endl;
    file.open(filename, ios::in | ios::out | ios::binary);
    if (!file.is_open()) {
        cerr << "Error: Unable to open file: " << filename << endl;
        throw runtime_error("File could not be opened");
        }
    cout << "File opened successfully: " << filename << endl;
    }

void open_fileW(fstream & f, const char filename[]) {
    f.open(filename, ios::out | ios::binary | ios::trunc);
    if (!f) {
        throw runtime_error("Failed to open file for writing: " + string(filename));
        }
    }

// void write_info(const vector<string>& info, const char filename[]) {
//     ofstream out(filename, ios::out | ios::binary | ios::trunc);
//     if (!out) {
//         throw runtime_error("Failed to open file for writing: " + string(filename));
//         }

//     try {
//         for (const auto& line : info) {
//             out << line << '\n';
//             }
//         out.close();
//         }
//     catch (const exception& e) {
//         cerr << "Error writing to file: " << e.what() << endl;
//         throw;
//         }

//     if (!out) {
//         throw runtime_error("Failed to write all data to file: " + string(filename));
//         }
//     }

// vector<string> read_info(const char filename[]) {
//     ifstream in(filename);
//     if (!in) {
//         throw runtime_error("Failed to open file for reading: " + string(filename));
//         }

//     vector<string> info;
//     string line;
//     while (getline(in, line)) {
//         info.push_back(line);
//         }

//     return info;
//     }


