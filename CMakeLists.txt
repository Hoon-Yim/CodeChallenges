cmake_minimum_required(VERSION 3.27)
project(PS)

set(CMAKE_CXX_STANDARD 17)

add_executable(PS main.cpp
        Easy/88-merge-sorted-array.cpp
        Easy/27-remove-element.cpp
        Easy/26-remove-duplicates-from-sorted-array.cpp
        Medium/80-remove-duplicates-from-sorted-array-ii.cpp
        Easy/169-majority-element.cpp
        Easy/125-valid-palindrome.cpp)
