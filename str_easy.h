#ifndef UNTITLED_STR_EASY_H
#define UNTITLED_STR_EASY_H

#include <string>
#include <iostream>

using namespace std;

string itc_hello_str(const string &name);

long long itc_len(const string &str);

void itc_print_copy_str(const string &str, int number);

void itc_first_end_three(string str);

int itc_count_char_in_str(char ch, const string &str);

string itc_even_place(const string &str);

double itc_percent_lower_uppercase(const string &str);

string itc_reverse_str(const string &str);

string itc_slice_str(const string &str, int start, int end);

bool itc_equal_reverse(const string &str);

string itc_cmp_str(string str1, string str2, int num);

int itc_find_str(string str1, string str2);

string itc_three_str(string str1, string str2, string str3);

int itc_max_char_on_end(const string &str);

//_________________

bool isLowerCase(char a);

bool isUpperCase(char a);

long long max_repeating(const string &str, string repeater);

#endif //UNTITLED_STR_EASY_H
