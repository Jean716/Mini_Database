// utilities.cpp
#include "utilities.h"
#include <vector>
#include <string>
#include <fstream>
#include <iostream>
#include <stdexcept>
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

void open_fileRW(fstream& f, const char filename[]) {
    cout << "-----Open_fileRW Fired!-----: " << filename << endl;
    try {
        cout << "Checking file: " << filename << endl;
        if (!file_exists(filename)) {
            cout << "File does not exist. Attempting to create: " << filename << endl;
            f.open(filename, fstream::out | fstream::binary);
            if (f.fail()) {
                throw runtime_error("Failed to create file: " + string(filename));
                }
            f.close();
            }
        f.open(filename, fstream::in | fstream::out | fstream::binary);
        if (f.fail()) {
            throw runtime_error("Failed to open file for reading and writing: " + string(filename));
            }
        cout << "File successfully opened: " << filename << endl;
        }
    catch (const exception& e) {
        cerr << "Exception: " << e.what() << endl;
        throw;
        }
    }

void open_fileW(fstream & f, const char filename[]) {
    cout << "Opening file for writing: " << filename << endl;
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

