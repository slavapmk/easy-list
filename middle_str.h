
#ifndef STR_MIDDLE_MIDDLE_STR_H
#define STR_MIDDLE_MIDDLE_STR_H

static const int ALPHABET_SIZE = 26;

#include "str_easy.h"

//f1

bool itc_isDigit(unsigned char c);

unsigned char itc_toUpper(unsigned char c);

unsigned char itc_changeCase(unsigned char c);

bool itc_compare(string s1, string s2);

int itc_countWords(string str);

//f2

string itc_maxCharWord(string str);

char itc_sameChar(string str);

bool itc_isFirstInSecond(string what, string str);

#endif //STR_MIDDLE_MIDDLE_STR_H

//f3

string itc_Cezar(string source, int k);

string itc_rmFreeSpace(string str);

bool itc_isIp(string str);

//f4

string itc_DecToBin(string str);

string itc_decToBase(int num, int base);

int main();