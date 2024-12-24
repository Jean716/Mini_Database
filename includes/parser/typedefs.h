#ifndef TYPEDEFS_H
#define TYPEDEFS_H

#include <string>
#include <vector>
#include "../../includes/bplustree/btree_array_functions.h"
#include "../../includes/bplustree/bplustree.h"
#include "../../includes/bplustree/map.h"
#include "../../includes/bplustree/multimap.h"
#include "../../includes/table/table.h"
#include <map>

using namespace std;

// Typedefs
typedef vector<string> vectorstr;
typedef vector<long> vectorlong;
typedef Map<string, long> map_sl;
typedef MMap<string, long> mmap_sl;
typedef MMap<string, string> mmap_ss;

#endif

