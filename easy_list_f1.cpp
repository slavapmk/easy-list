#include <vector>
#include "middle_str.h"

void itc_even_index_list(const vector<int> &mass, vector<int> &mass2) {
    for (int i = 0; i < mass.size(); ++i)
        if (i % 2 == 0)
            mass2.push_back(mass[i]);
}

void itc_even_parts_list(const vector<int> &mass, vector<int> &mass2) {
    for (const auto &item: mass)
        if (item % 2 == 0)
            mass2.push_back(item);
}

int itc_positive_list(const vector<int> &mass) {
    int count = 0;
    for (const auto &item: mass)
        if (item >= 0)
            count++;
    return count;
}

int itc_sl_list(const vector<int> &mass) {
    int count = 0;
    for (int i = 1; i < mass.size(); ++i)
        if (mass[i - 1] < mass[i])
            count++;
    return count;
}

bool contains(int num, int digit) {
    while (num > 0) {
        if (num % 10 == digit) return true;
        num /= 10;
    }
    return false;
}

bool itc_same_parts_list(const vector<int> &mass) {
    for (int digit = 0; digit < 10; ++digit) {
        int count = 0;
        for (const auto &item: mass) {
            if (contains(item, digit))
                count++;
            if (count >= 2)
                return true;
        }
    }
    return false;
}