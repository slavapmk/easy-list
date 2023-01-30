#include "middle_str.h"

char shift(char that, int offset, char baseChar) {
    char charPos = that - baseChar;
    char newCharPos = (charPos + offset) % ALPHABET_SIZE;
    int absNewCharPos = newCharPos < 0
                        ? newCharPos + ALPHABET_SIZE
                        : newCharPos;
    return baseChar + absNewCharPos;
}

string itc_Cezar(string source, int k) {
    string result;
    for (char e: source)
        if ('a' <= e && e <= 'z')
            result += shift(e, k, 'a');
        else if ('A' <= e && e <= 'Z')
            result += shift(e, k, 'A');
        else
            result += e;
    return result;
}

string itc_rmFreeSpace(string str) {
    bool isLastSpace = false;
    string result;
    for (auto item: str) {
        if (item == ' ') {
            if (!isLastSpace)
                result += item;
            isLastSpace = true;
        } else {
            isLastSpace = false;
            result += item;
        }
    }
    return result;
}

int to_int(string str) {
    int result = 0;
    for (const auto &item: str) {
        if (item < '0' || item > '9')
            return -1;
        result *= 10;
        result += (item - '0');
    }
    return result;
}

bool itc_isIp(string str) {
    int i = itc_count_char_in_str('.', str) + 1;
    string result[i];
    int counter = 0;
    string last;
    for (const auto &item: str) {
        if (item == '.') {
            result[counter] = last;
            last = "";
            counter++;
        } else
            last += item;
    }
    result[counter] = last;

    if (i != 4)
        return false;

    for (const auto &item: result) {
        int anInt = to_int(item);
        if (anInt < 0 || anInt > 255)
            return false;
    }

    return true;
}