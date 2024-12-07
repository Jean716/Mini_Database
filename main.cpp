#include <iostream>
#include <iomanip>
#include "includes/binary_files/file_record.h"
#include "includes/table/table.h"

using namespace std;

int main(int argv, char** argc) {
    cout << "\n\n" << endl;

    Table t2("student");

    fstream file;
    file.open("student.tbl", ios::in | ios::binary);
    //file.open("employee.tbl", ios::in | ios::binary);

    if (!file.is_open()) {
        cerr << "Failed to open employee.tbl" << endl;
        return 1;
        }

    FileRecord record;
    long recno = 0;
    while (true) {
        long bytes = record.read(file, recno);

        if (bytes == 0)
            break;

        vector<string> fields = record.get_record();
        if (fields.empty()) {
            recno++;
            continue;
            }

        cout << "Record #" << recno << ": ";
        for (const auto& f : fields) {
            cout << f << " | ";
            }
        cout << endl;

        recno++;
        }

    file.close();
    return 0;

    cout << "\n\n\n=====================" << endl;
    return 0;
    }