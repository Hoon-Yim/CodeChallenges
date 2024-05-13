// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution 
{
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
    {
        ListNode *newNode = new ListNode();
        ListNode *temp = newNode;
        
        while (list1 && list2)
        {
            ListNode *smaller;

            if (list1->val <= list2->val) { smaller = list1; list1 = list1->next; }
            else { smaller = list2; list2 = list2->next; }

            temp->next = new ListNode(smaller->val);

            temp = temp->next;
        }

        while (list1) 
        {
            temp->next = new ListNode(list1->val);
            list1 = list1->next;
            temp = temp->next;
        }

        while (list2) 
        {
            temp->next = new ListNode(list2->val);
            list2 = list2->next;
            temp = temp->next;
        }

        return newNode->next;
    }
};