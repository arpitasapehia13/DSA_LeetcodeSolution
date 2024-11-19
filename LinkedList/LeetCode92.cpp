// REVERSE LL 2

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *reverseBetween(ListNode *head, int left, int right)
    {

        if (head == nullptr || head->next == nullptr)
        {
            return head;
        }

        ListNode *dummyNode = new ListNode(0);
        dummyNode->next = head;
        ListNode *previous = dummyNode;
        for (int i = 1; i < left; i++)
        {
            previous = previous->next;
        }

        ListNode *current = previous->next;
        for (int i = 1; i <= right - left; i++)
        {
            ListNode *temp = previous->next;
            previous->next = current->next;
            current->next = current->next->next;
            previous->next->next = temp;
        }

        return dummyNode->next;
    }
};