#include <iostream>
#include <string>

class Solution
{
public:
    bool isPalindrome(std::string s)
    {
        std::string capital;
        // converting every alphabet into capital
        // and removing non-alphanumeric characters
        for (char c : s)
        {
            // when c is small letter
            if (c >= 97 && c <= 122) c -= 32;
            // when c is non-alphanumeric (especially capital)
            if (!(c >= 65 && c <= 90) && !(c >= 48 && c <= 57)) continue;

            capital += c;
        }

        // check if the processed string is palindrome
        int size = capital.size();

        if (size == 0) return true;

        int half = (size % 2) ? size / 2 - 1 : size / 2;

        for (int i = 0; i <= half; ++i)
        {
            if (capital[i] != capital[size - 1 - i]) return false;
        }

        return true;
    }
};