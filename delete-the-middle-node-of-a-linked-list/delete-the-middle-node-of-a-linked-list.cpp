class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {

        ListNode* slowPrev = nullptr;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != nullptr && fast->next != nullptr) {
            slowPrev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
                if(head->next == nullptr) {
            return nullptr;
        }
        if(slowPrev == nullptr) return slow;

        slowPrev->next = slow->next;
        return head;
    }
};