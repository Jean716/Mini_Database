#include "file_record.h"
#include "../../includes/tokenizer/constants.h" 

FileRecord::FileRecord() {
    _record.resize(MAX_ROWS, nullptr);
    for (int i = 0; i < MAX_ROWS; ++i) {
        _record[i] = new char[MAX_COLS]();
        }
    }

FileRecord::FileRecord(const vector<string>& v) {
    _record.resize(MAX_ROWS, nullptr);
    for (int i = 0; i < MAX_ROWS; ++i) {
        _record[i] = new char[MAX_COLS]();
        if (i < v.size()) {
            strncpy(_record[i], v[i].c_str(), MAX_COLS - 1);
            _record[i][MAX_COLS - 1] = '\0';
            }
        }
    }


long FileRecord::write(fstream& outs) {
    outs.seekg(0, outs.end);
    long pos = outs.tellp();
    for (int i = 0; i < MAX_ROWS; ++i) {
        outs.write(_record[i], MAX_COLS);
        }
    return pos / (MAX_ROWS * MAX_COLS);
    }

long FileRecord::read(fstream& ins, long recno) {
    long pos = recno * MAX_ROWS * MAX_COLS;
    ins.seekg(pos, ios_base::beg);
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
