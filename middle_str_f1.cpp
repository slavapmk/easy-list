#include "middle_str.h"

bool itc_isDigit(unsigned char c) {
    return c >= 48 && c <= 57;
}

unsigned char itc_toUpper(unsigned char c) {
    if (c >= 'a' && c <= 'z')
        return c - 32;
    return c;
}

unsigned char itc_changeCase(unsigned char c) {
    if (c >= 65 && c <= 90)
        return c + 32;
    else if (c >= 97 && c <= 122)
        return c - 32;
    return c;
}

bool itc_compare(string s1, string s2) {
    long long i1 = itc_len(s1);
    long long i2 = itc_len(s2);
    long long max = i1 > i2 ? i1 : i2;
    for (int i = 0; i < max; ++i)
        if (s1[i] != s2[i])
            return false;
    return true;
}

int itc_countWords(string str) {
    int count = 0;
    for (const auto &item: str) {
        if (item == ' ')
            count++;
        else if (!('a' <= item && item <= 'z' || 'A' <= item && item <= 'Z'))
            return 0;
    }
    return count + 1;
}