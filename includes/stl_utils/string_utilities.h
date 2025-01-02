#ifndef STRING_UTILITIES_H
#define STRING_UTILITIES_H

#include <string>
#include <algorithm>
#include <cctype>
#include <iostream>
using namespace std;

void trim(std::string &s);
void remove_all_spaces(string &s);

void trim(string &s) {
    s.erase(s.begin(), find_if(s.begin(), s.end(), [] (unsigned char ch) { return !isspace(ch); }));
    s.erase(find_if(s.rbegin(), s.rend(), [] (unsigned char ch) { return !isspace(ch); }).base(), s.end());
    }

void remove_all_spaces(string &s) {
    s.erase(remove_if(s.begin(), s.end(), ::isspace), s.end());
    }

#endif 