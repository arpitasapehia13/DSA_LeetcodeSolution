// PALINDROME IN A LL

class Solution
{
public:
    bool isPalindrome(ListNode *head)
    {
        if (head == nullptr || head->next == nullptr)
        {
            return true;
        }

        ListNode *slow = head;
        ListNode *fast = head;
        ListNode *previous = nullptr;

        while (fast != nullptr && fast->next != nullptr)
        {
            fast = fast->next->next;

            ListNode *temp = slow->next;
            slow->next = previous;
            previous = slow;
            slow = temp;
        }

        if (fast != nullptr)
        {
            slow = slow->next;
        }

        while (previous != nullptr && slow != nullptr)
        {
            if (previous->val != slow->val)
            {
                return false;
            }
            previous = previous->next;
            slow = slow->next;
        }

        return true;
    }
};
