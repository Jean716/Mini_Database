// utilities.h
#ifndef UTILITIES_H
#define UTILITIES_H

#include <fstream>
#include <iostream>
using namespace std;
#include "../../includes/bplustree/map.h"
#include "../../includes/table/table.h"

bool file_exists(const char filename[]);
void open_fileRW(fstream& f, const char filename[]);

void open_fileW(fstream& f, const char filename[]);
void write_info(const vector<string>& info, const char filename[]);
vector<string> read_info(const char filename[]);




#endif // UTILITIES_H