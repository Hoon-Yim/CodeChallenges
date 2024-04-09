#include <vector>
#include <cmath>
#include <unordered_map>
#include <utility>

class Solution
{
public:
    int majorityElement(std::vector<int>& nums)
    {
        std::unordered_map<int, int> map;

        for (const int num : nums)
        {
            if (map.find(num) == map.end()) map[num] = 0;
            else map[num] += 1;
        }

        std::pair<int, int> maxEntry = *map.begin();
        for (const auto &entry : map)
        {
            if (entry.second > maxEntry.second) maxEntry = entry;
        }

        return maxEntry.first;
    }

//    int majorityElement(std::vector<int>& nums)
//    {
//        int count = 0, biggest = 0;
//
//        for (int num : nums)
//        {
//            if (count == 0)
//            {
//                biggest = num;
//            }
//
//            if (num == biggest) count++;
//            else count--;
//        }
//
//        return biggest;
//    }
};