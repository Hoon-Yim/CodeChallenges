# include <vector>
# include <string>

class Solution 
{
public:
    std::vector<std::string> summaryRanges(std::vector<int>& nums) 
    {
        int from = 0, to = 0;
        std::vector<std::string> returnVector;

        if (nums.size() == 0) return returnVector;

        for (int i = 0; i < nums.size() - 1; ++i)
        {
            int current = nums[i];
            int next = nums[i + 1];
            
            if (next == current + 1) 
            {
                to = i + 1;
            }
            else 
            {
                if (from == to)
                {
                    returnVector.push_back(std::to_string(nums[from]));
                }
                else
                {
                    returnVector.push_back(
                        std::to_string(nums[from]) + "->" + std::to_string(nums[to]));
                }
                from = i + 1;
                to = from;
            }
        }

        if (from == to)
        {
            returnVector.push_back(std::to_string(nums[from]));
        }
        else
        {
            returnVector.push_back(
                std::to_string(nums[from]) + "->" + std::to_string(nums[to]));
        }

        return returnVector;
    }
};