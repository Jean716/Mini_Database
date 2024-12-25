#include "resultset.h"

void ResultSet::and_with(const vector<long>& other_recnos) {
   // cout << "-------ResultSet::and_with fired!-------" << endl;

    vector<long> sorted_recnos = _recnos;
    vector<long> sorted_other = other_recnos;
    sort(sorted_recnos.begin(), sorted_recnos.end());
    sort(sorted_other.begin(), sorted_other.end());

    vector<long> intersection;
    set_intersection(sorted_recnos.begin(), sorted_recnos.end(),
        sorted_other.begin(), sorted_other.end(),
        back_inserter(intersection));
    _recnos = intersection;

    // cout << "_recnos:";
    // for (const auto& rec : _recnos) {
    //     cout << rec << " ";
    //     }
    // cout << endl;
    }


void ResultSet::or_with(const vector<long> & other_recnos) {
    //cout << "-------ResultSet::or_with fired!-------" << endl;

    vector<long> sorted_recnos = _recnos;
    vector<long> sorted_other = other_recnos;
    sort(sorted_recnos.begin(), sorted_recnos.end());
    sort(sorted_other.begin(), sorted_other.end());

    vector<long> union_set;
    set_union(sorted_recnos.begin(), sorted_recnos.end(),
        sorted_other.begin(), sorted_other.end(),
        back_inserter(union_set));
    _recnos = union_set;

    // cout << "_recnos:";
    // for (const auto& rec : _recnos) {
    //     cout << rec << " ";
    //     }
    // cout << endl;
    }