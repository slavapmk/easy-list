#include "middle_str.h"

bool isLetter(char item) {
    return 'a' <= item && item <= 'z' || 'A' <= item && item <= 'Z';
}

string itc_maxCharWord(string str) {
    string result;
    string last;
    int spaces = 0;
    for (const auto item: str) {
        if (isLetter(item))
            last += item;
        else {
            spaces++;
            result = itc_len(last) > itc_len(result) ? last : result;
            last = "";
        }
    }
    result = itc_len(last) > itc_len(result) ? last : result;
    return spaces == 0 ? "error" : result;
}

bool test(char i, string str) {
    int count = 0;
    for (const auto &item: str)
        if (item == i)
            count++;
    return count == 2;
}

char itc_sameChar(string str) {
    for (char i: str)
        if (test(i, str))
            return i;
    return '-';
}

bool itc_isFirstInSecond(string what, string where) {
    long long whatLen = itc_len(what);
    long long whereLen = itc_len(where);
    if (whatLen == 0 || whereLen == 0 || whatLen > whereLen)
        return false;
    for (int whereIndex = 0; whereIndex < whereLen - whatLen + 1; ++whereIndex) {
        int whatIndex = 0, k = 0;
        while (what[whatIndex] == where[whereIndex + whatIndex] && whatIndex < whatLen) {
            k++;
            whatIndex++;
        }
        if (k == whatLen)
            return true;
    }
    return false;
}