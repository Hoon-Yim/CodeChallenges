#include <unordered_map>

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution
{
public:
    bool hasCycle(ListNode *head) {
        if (head == nullptr) return false;

        std::unordered_map<ListNode*, ListNode*> map;

        while (head->next) 
        {
            if (!map.count(head))
            {
                map[head] = head->next;
            }
            else
            {
                if (map[head] == head->next) return true;
            }

            head = head->next;
        }
        

        return false;
    }
};