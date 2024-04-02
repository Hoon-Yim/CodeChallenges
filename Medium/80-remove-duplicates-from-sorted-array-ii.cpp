#include <vector>

class Solution
{
public:
    int removeDuplicates(std::vector<int>& nums)
    {
        for (int i = 0; i < nums.size() - 1; ++i)
        {
            int duplicate = -10000 - 1;
            int count = 1;

            if (nums[i] == nums[i + 1])
            {
                duplicate = nums[i];

                for (int j = i + 1; j < nums.size() && nums[j] == duplicate; ++j) { count++; }
            }

            if (count > 2)
            {
                nums.erase(nums.begin() + (i + 2), nums.begin() + (i + count));
                i++;
            }
        }

        return nums.size();
    }
};