#include <vector>
#include <cmath>

class Solution
{
public:
    int majorityElement(std::vector<int>& nums)
    {
        int count = 0, biggest = 0;

        for (int num : nums)
        {
            if (count == 0)
            {
                biggest = num;
            }

            if (num == biggest) count++;
            else count--;
        }

        return biggest;
    }
};