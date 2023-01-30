#include "str_easy.h"

string itc_hello_str(const string &name) {
    return "Hello, " + name;
}

long long itc_len(const string &str) {
    long long i = 0;
    for (const auto &item: str)
        i++;
    return i;
}

void itc_print_copy_str(const string &str, int number) {
    for (int i = 0; i < number; ++i) {
        cout << str << endl;
    }
}

void itc_first_end_three(string str) {
    int length = (int) itc_len(str);
    if (length > 5) {
        cout
                << str[0]
                << str[1]
                << str[2]
                << str[length - 3]
                << str[length - 2]
                << str[length - 1];
    } else {
        for (int i = 0; i < length; ++i)
            cout << str[0];
        cout << endl;
    }
}

int itc_count_char_in_str(char ch, const string &str) {
    long long i = 0;
    for (const auto &item: str)
        if (ch == item)
            i++;
    return (int) i;
}
