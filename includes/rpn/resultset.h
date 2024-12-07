#ifndef RESULT_SET_H
#define RESULT_SET_H

#include <vector>
#include <string>
#include <iostream>
#include <set>
#include <algorithm> // for set_intersection, set_union
#include "../../includes/bplustree/multimap.h"
#include "../../includes/queue/MyQueue.h"
#include "../../includes/table/table.h"

using namespace std;


class ResultSet
    {
    public:
        ResultSet() : _recnos(vector<long>()) {}
        ResultSet(const vector<long>& recnos) : _recnos(recnos) {}

        //get the recnos
        vector<long> get_recnos() const { return _recnos; }

        //add a recno to the result set
        void add(long recno) { _recnos.push_back(recno); }

        void and_with(const vector<long>& other_recnos);

        void or_with(const vector<long>& other_recnos);

        bool empty() const { return _recnos.empty(); }

        void clear() { _recnos.clear(); }
        friend ostream& operator<<(ostream& outs, const ResultSet& rs) {
            for (long recno : rs._recnos) {
                outs << recno << " ";
                }
            return outs;
            }
    private:
        vector<long> _recnos;
    };




#endif // RESULT_SET_H