#include <vector>

class Solution
{
public:
    int removeDuplicates(std::vector<int>& nums)
    {
        for (int i = 0; i < nums.size() - 1; ++i)
        {
            if (nums[i] == nums[i + 1])
            {
                nums.erase(nums.begin() + i--);
            }
        }

        return nums.size();
    }
};