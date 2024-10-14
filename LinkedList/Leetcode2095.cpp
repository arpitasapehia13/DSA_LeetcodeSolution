// DELETE MIDDLE OF LL
class Solution
{
public:
    ListNode *deleteMiddle(ListNode *head)
    {
        // IF ONLY ONE NODE IS PRESENT
        if (head == nullptr || head->next == nullptr)
        {
            return nullptr;
        }

        ListNode *slow = head;
        ListNode *fast = head;
        ListNode *prevSlow = nullptr;

        while (fast != nullptr && fast->next != nullptr)
        {
            prevSlow = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        prevSlow->next = slow->next;
        delete (slow);

        return head;
    }
};
