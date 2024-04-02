#include <iostream>

#include "Medium/80-remove-duplicates-from-sorted-array-ii.cpp"

int main()
{
    Solution s;

    std::vector<int> temp = {1, 1};
    s.removeDuplicates(temp);

    for (int i : temp)
    {
        std::cout << i << " ";
    }

    return 0;
}
