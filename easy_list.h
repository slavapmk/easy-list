#ifndef EASY_LIST_H
#define EASY_LIST_H

#include <vector>

using namespace std;

//f1

void itc_even_index_list(const vector<int> &mass, vector<int> &mass2);

void itc_even_parts_list(const vector<int> &mass, vector<int> &mass2);

int itc_positive_list(const vector<int> &mass);

int itc_sl_list(const vector<int> &mass);

bool itc_same_parts_list(const vector<int> &mass);

//f2

void itc_rev_list(vector<int> &mass);

void itc_rev_par_list(vector<int> &mass);

void itc_rshift_list(vector<int> &mass);

void itc_super_shift_list(vector<int> &mass, int n);

#endif