#include <vector>
#include <algorithm>

class Solution
{
public:
    int removeElement(std::vector<int>& nums, int val)
    {
        for (int i = 0; i < nums.size(); ++i)
        {
            if (nums[i] == val)
            {
                nums.erase(nums.begin() + i--);
            }
        }

        return nums.size();
    }

//    int removeElement(std::vector<int>& nums, int val)
//    {
//        nums.erase(std::remove(nums.begin(), nums.end(), val), nums.end());
//        return nums.size();
//    }
};