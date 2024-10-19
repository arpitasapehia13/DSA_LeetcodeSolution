// REMOVE NTH NODE FROM THE END

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
    int getLenghtOfLinkedList(ListNode *head)
    {
        int length = 0;
        ListNode *current = head;
        while (current != nullptr)
        {
            length++;
            current = current->next;
        }
        return length;
    }

    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        int L = getLenghtOfLinkedList(head);

        if (L == n)
        {
            ListNode *temp = head->next;
            delete (head);
            return temp;
        }

        int travel_front = L - n;
        ListNode *temp = head;
        ListNode *prev = NULL;

        while (travel_front != 0)
        {
            prev = temp;
            temp = temp->next;
            travel_front--;
        }

        prev->next = temp->next;
        delete (temp);
        return head;
    }
};