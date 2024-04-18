#include <iostream>
#include <string>

#include "Easy/228-summary-ranges.cpp"

int main()
{
    Solution s;

    std::vector<int> nums = {};
    std::vector<std::string> intervals = s.summaryRanges(nums);
    for (const std::string &interval : intervals)
    {
        std::cout << interval << std::endl;
    }

    
    return 0;
}
