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
    // cout << "-----Open_fileRW Fired!-----:\n " << endl;
    try {
        // cout << "File name: " << filename << endl;
        if (!file_exists(filename)) {
            //cout << "File does not exist. Attempting to create: " << filename << endl;
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
        // cout << "File successfully opened: " << filename << endl;
        }
    catch (const exception& e) {
        cerr << "Exception: " << e.what() << endl;
        throw;
        }
    }

// only open file for writing，it will truncate the file if it exists
void open_fileW(fstream & f, const char filename[]) {
    //cout << "Opening file for writing: " << filename << endl;
    try {
        //cout << "Opening file for writing (overwrite mode): " << filename << endl;
        f.open(filename, ios::out | ios::binary | ios::trunc);
        if (!f.is_open()) {
            throw runtime_error("Failed to open file for writing: " + string(filename));
            }
        }
    catch (const exception& e) {
        cerr << "Exception in open_fileW: " << e.what() << endl;
        throw;
        }
    }

void write_info(const vector<string>& info, const char filename[]) {
    ofstream out(filename);
    if (!out.is_open()) {
        throw runtime_error("Could not open file for writing: " + string(filename));
        }
    for (const auto& line : info) {
        out << line << endl;
        }
    out.close();
    }

vector<string> read_info(const char filename[]) {
    cout << "Reading info from file: " << filename << endl;
    ifstream in(filename);
    if (!in.is_open()) {
        throw runtime_error("Could not open file for reading: " + string(filename));
        }
    vector<string> info;
    string line;
    while (getline(in, line)) {
        cout << "Read line: [" << line << "]" << endl;
        info.push_back(line);
        }
    in.close();
    cout << "Read " << info.size() << " lines from file." << endl;
    return info;
    }


