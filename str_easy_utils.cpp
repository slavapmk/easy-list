#include "str_easy.h"

bool isLowerCase(char a) {
    return a >= 97 && a <= 122;
}

bool isUpperCase(char a) {
    return a >= 65 && a <= 90;
}

long long max(long long a, long long b) {
    return a > b ? a : b;
}

bool is(string a, char b) {
    for (const auto &item: a)
        if (item == b)
            return true;
    return false;
}

long long max_repeating(const string &str, string repeater) {
    long long counter = 0;
    long long maxRepeating = 0;
    long long lastRepeating = 0;
    for (const auto &item: str) {
        if (is(repeater, item)) {
            lastRepeating++;
        } else {
            maxRepeating = max(maxRepeating, lastRepeating);
            lastRepeating = 0;
        }
        counter++;
    }
    return max(maxRepeating, lastRepeating);
}
