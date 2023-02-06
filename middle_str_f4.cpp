#include "middle_str.h"

string intToChar(int symbol) {
    string result;
    if (symbol >= 0 && symbol <= 9)
        result += (char) (symbol + '0');
    else if (symbol >= 10)
        result += (char) (symbol - 10 + 'A');
    return result;
}

string itc_decToBase(int num, int base) {
    string result;
    while (num > 0) {
        result = intToChar(num % base) + result;
        num = num / base;
    }
    return result;
}

string longToBin(long long num) {
    string result;
    while (num > 0) {
        result = intToChar(num % 2) + result;
        num = num / 2;
    }
    return result;
}

string itc_DecToBin(string str) {
    long long last = 0;
    bool lastInt = false;
    string result;
    for (const auto &item: str) {
        if (item >= '0' && item <= '9') {
            last *= 10;
            last += item - '0';
            lastInt = true;
        } else {
            if (lastInt) {
                result += longToBin(last);
                last = 0;
            }
            lastInt = false;
            result += item;
        }
    }
    if (lastInt)
        result += longToBin(last);
    return result;
}