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
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* header=new ListNode(0);
        ListNode* curr=header;
        while(l1&&l2)
        {
            if(l1->val<l2->val)
            {
                ListNode* temp=new ListNode(l1->val);
                curr->next=temp;
                curr=curr->next;
                l1=l1->next;
            }
            else
            {
                ListNode* temp=new ListNode(l2->val);
                curr->next=temp;
                curr=curr->next;
                l2=l2->next;
            }
        }
        if(l1)
            curr->next=l1;
        if(l2)
            curr->next=l2;
        return header->next;
    }
};