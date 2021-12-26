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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* root=new ListNode(0,head);
        ListNode* prev=root;
        ListNode* curr=head;
        while(curr)
        {
            ListNode* tail=curr;
            int x=0;
            while(curr && x<k)
            {
                curr=curr->next;
                x++;
            }
            if(x!=k)
                prev->next=tail;
            else
            {
                prev->next=reverse(tail,k);
                prev=tail;
            }
        }
        return root->next;
    }
    ListNode* reverse(ListNode* curr,int k)
    {
        ListNode* prev=NULL;
        while(curr && k--)
        {
            ListNode* temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        return prev;
    }
};