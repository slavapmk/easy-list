#include <vector>
#include "middle_str.h"

void itc_rev_list(vector<int> &mass) {
    for (int i = 0; i < (mass.size() / 2); ++i) {
        unsigned long long lastI = mass.size() - 1 - i;
        int buffer = mass[lastI];
        mass[lastI] = mass[i];
        mass[i] = buffer;
    }
}

void itc_rev_par_list(vector<int> &mass) {
    for (int i = 0; i < (mass.size() / 2); ++i) {
        int buffer = mass[2 * i];
        mass[2 * i] = mass[2 * i + 1];
        mass[2 * i + 1] = buffer;
    }
}