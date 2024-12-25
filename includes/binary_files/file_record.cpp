#ifndef FILE_RECORD_H
#define FILE_RECORD_H

#include <vector>
#include <string>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

class FileRecord
    {
    public:
        static const int MAX_ROWS = 10;
        static const int MAX_COLS = 256;
        FileRecord();
        FileRecord(const vector<string>& v);

        long write(fstream& outs);
        long read(fstream& ins, long recno);
        vector<string> get_record() const;
        int num_of_fields() const;
        string operator[](int index) const;
        friend ostream& operator<<(ostream& outs, const FileRecord& r);
        vector<char*> _record;
    };

    FileRecord::FileRecord() {
      _record.resize(MAX_ROWS, nullptr);
      for (int i = 0; i < MAX_ROWS; ++i) {
        _record[i] = new char[MAX_COLS]();
        for (int j = 0; j < MAX_COLS; j++) {
          _record[i][j] = '\0';
        }
      }
    }

FileRecord::FileRecord(const vector<string>& v) {
  // cout << "FileRecord::FileRecord fired!" << endl;

  _record.resize(MAX_ROWS, nullptr);
  for (int i = 0; i < MAX_ROWS; ++i) {
    _record[i] = new char[MAX_COLS]();
    for (int j = 0; j < MAX_COLS; j++) {
      _record[i][j] = '\0';
    }
    if (i < v.size()) {
      strcpy(_record[i], v[i].c_str());
      //_record[i][MAX_COLS - 1] = '\0';
    }
  }
}

long FileRecord::write(fstream& outs) {
    //cout << "FileRecord::write fired!" << endl;
    outs.seekg(0, outs.end);
    long pos = outs.tellp();
    for (int i = 0; i < MAX_ROWS; ++i) {
        outs.write(_record[i], MAX_COLS);
        }
    return pos / (MAX_ROWS * MAX_COLS);
    }

long FileRecord::read(std::fstream& ins, long recno) {
    long pos = recno * MAX_ROWS * MAX_COLS;
    ins.seekg(pos, std::ios_base::beg);
    for (int i = 0; i < MAX_ROWS; ++i) {
        ins.read(_record[i], MAX_COLS);
        _record[i][MAX_COLS - 1] = '\0';
        }
    return ins.gcount();
    }

vector<string> FileRecord::get_record() const {
    vector<string> result;
    for (int i = 0; i < MAX_ROWS; ++i) {
        if (_record[i][0] != '\0') {
            result.push_back(string(_record[i]));
            }
        }
    return result;
    }

int FileRecord::num_of_fields() const {
    int count = 0;
    for (int i = 0; i < MAX_ROWS; ++i) {
        if (_record[i][0] != '\0') {
            ++count;
            }
        }
    return count;
    }

string FileRecord::operator[](int index) const {
    if (index < 0 || index >= MAX_ROWS) {
        throw out_of_range("Index out of range");
        }
    return string(_record[index]);
    }

ostream& operator<<(ostream& outs, const FileRecord& r) {
    for (int i = 0; i < r._record.size(); ++i) {
        outs << setw(25) << right << r._record[i];
        }
    return outs;
    }

#endif 