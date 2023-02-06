#include <vector>

using namespace std;

void itc_rev_list(vector<int> &mass) {
    for (int i = 0; i < (mass.size() / 2); i++) {
        unsigned long long lastI = mass.size() - 1 - i;
        int buffer = mass[lastI];
        mass[lastI] = mass[i];
        mass[i] = buffer;
    }
}

void itc_rev_par_list(vector<int> &mass) {
    for (int i = 0; i < (mass.size() / 2); i++) {
        int buffer = mass[2 * i];
        mass[2 * i] = mass[2 * i + 1];
        mass[2 * i + 1] = buffer;
    }
}

void itc_rshift_list(vector<int> &mass) {
    if (mass.empty())return;
    int last = mass[mass.size() - 1];
    for (unsigned long long i = mass.size() - 1; i > 0; i--)
        mass[i] = mass[i - 1];
    mass[0] = last;
}

void itc_lshift_list(vector<int> &mass) {
    if (mass.empty())return;
    int first = mass[0];
    for (unsigned long long i = 0; i < mass.size(); i++)
        mass[i] = mass[i + 1];
    mass[mass.size() - 1] = first;
}

void itc_super_shift_list(vector<int> &mass, int n) {
    if (n < 0)
        for (int i = 0; i < n * -1; i++)
            itc_lshift_list(mass);
    else
        for (int i = 0; i < n; i++)
            itc_rshift_list(mass);
}