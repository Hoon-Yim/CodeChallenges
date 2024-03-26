#include <iostream>
#include <vector>

class Solution
{
public:
    void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n)
    {
        if (m == 0) { nums1 = nums2; return; }
        if (n == 0) { return; }

        std::vector<int> temp;

        int i = 0, j = 0;
        while (i < m && j < n)
        {
            if (nums1[i] < nums2[j]) { temp.push_back(nums1[i++]); }
            else if (nums1[i] > nums2[j]) { temp.push_back(nums2[j++]); }
            else { temp.push_back(nums1[i++]); temp.push_back(nums2[j++]); }
        }

        while (i < m) { temp.push_back(nums1[i++]); }
        while (j < n) { temp.push_back(nums2[j++]); }

        nums1 = temp;

        return;
    }
};