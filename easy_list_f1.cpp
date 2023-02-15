#include <vector>

using namespace std;

void itc_even_index_list(const vector<int> &mass, vector<int> &mass2) {
    for (int i = 0; i < mass.size(); i++)
        if (i % 2 == 0)
            mass2.push_back(mass[i]);
}

void itc_even_parts_list(const vector<int> &mass, vector<int> &mass2) {
    for (int item: mass)
        if (item % 2 == 0)
            mass2.push_back(item);
}

int itc_positive_list(const vector<int> &mass) {
    int count = 0;
    for (int item: mass)
        if (item >= 0)
            count++;
    return count;
}

int itc_sl_list(const vector<int> &mass) {
    int count = 0;
    for (int i = 1; i < mass.size(); i++)
        if (mass[i - 1] < mass[i])
            count++;
    return count;
}

bool contains(int num, int digit) {
    if (num < 0) num *= -1;
    while (num > 0) {
        if (num % 10 == digit) return true;
        num /= 10;
    }
    return false;
}

bool itc_same_parts_list(const vector<int> &mass) {
    for (int i = 1; i < mass.size(); ++i)
        if ((mass[i] >= 0 && mass[i - 1] >= 0) || (mass[i] < 0 && mass[i - 1] < 0))
            return true;
    return false;
}