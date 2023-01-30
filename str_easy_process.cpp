#include "str_easy.h"

string itc_even_place(const string &str) {

    long long len = itc_len(str);

    if (len < 2)

        return "-1";

    string result;

    for (long long i = 1; i < len; i += 2)

        result += str[i];

    return result;

}


string itc_reverse_str(const string &str) {
    string result;
    for (const auto &item: str)
        result = item + result;
    return result;
}

string itc_slice_str(const string &str, int start, int end) {
    long long int length = itc_len(str);
    if (end > length)
        end = (int) length;
    long long counter = 0;
    string result;
    for (const auto &item: str) {
        if (counter >= start && counter <= end)
            result += item;
        counter++;
    }
    return result;
}

string itc_cmp_str(string str1, string str2, int num) {
    string first = itc_slice_str(str1, 0, num - 1);
    string third = itc_slice_str(str1, num, (int) (itc_len(str1) - itc_len(str2)) - 1);
    string result = first + str2 + third;
    result = itc_slice_str(result, 0, (int) itc_len(str1) - 1);
    return result;
}

string itc_three_str(string str1, string str2, string str3) {
    int index = itc_find_str(str1, str2);
    long long len = itc_len(str2);
    long long replacerLen = itc_len(str1);
    while (index != -1) {
        string a = itc_slice_str(str1, 0, index - 1);
        string b = itc_slice_str(str1, index + len, replacerLen);
        str1 = a + str3 + b;
        index = itc_find_str(str1, str2);
    }
    return str1;
}
