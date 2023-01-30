#include "str_easy.h"

int itc_find_str(string str1, string str2) {
    long long str1Length = itc_len(str1);
    long long str2Length = itc_len(str2);
    if (str2Length > str1Length)
        return -1;
    int startIndex = -1;
    int consecutive = 0;
    for (int i = 0; i < str1Length; i++) {
        if (consecutive >= str2Length)
            break;
        if (str1[i] == str2[consecutive]) {
            if (consecutive == 0)
                startIndex = i;
            consecutive++;
        }
        else {
            startIndex = -1;
            consecutive = 0;
        }
    }
    return startIndex;
}

int itc_max_char_on_end(const string& str) {
    return (int) max_repeating(str, "1234567890");
}

double itc_percent_lower_uppercase(const string &str) {
    double lower = 0, upper = 0;
    for (const auto &item: str)
        if (isLowerCase(item))
            lower++;
        else if (isUpperCase(item))
            upper++;

    return upper / lower * 100;
}

bool itc_equal_reverse(const string &str) {
    string reversed = itc_reverse_str(str);
    return reversed == str;
}
