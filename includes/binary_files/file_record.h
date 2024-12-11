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


#endif 