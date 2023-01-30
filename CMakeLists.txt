cmake_minimum_required(VERSION 3.23.2)
project(str_middle)

set(CMAKE_CXX_STANDARD 17)

add_executable(
        str_middle
        str_easy_calc.cpp
        str_easy_process.cpp
        str_easy_utils.cpp
        str_easy_base.cpp

        middle_str.h
        middle_str_f1.cpp
        middle_str_f2.cpp
        middle_str_f3.cpp
        middle_str_f4.cpp

        easy_list.h
        easy_list_f1.cpp
)
