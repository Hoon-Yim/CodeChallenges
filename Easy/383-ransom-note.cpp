#include <unordered_map>
#include <string>

class Solution
{
public:
    bool canConstruct(std::string ransomNote, std::string magazine)
    {
        std::unordered_map<char, int> map;
        for (char c : magazine)
        {
            // if c is not in map
            if (map.find(c) == map.end()) map[c] = 1;
            else map[c] += 1;
        }

        for (char c : ransomNote)
        {
            // if c is not in map
            if (map.find(c) == map.end())
            {
                return false;
            }
            else
            {
                if (map[c] == 0) return false;
                else map[c] -= 1;
            }
        }

        return true;
    }
};