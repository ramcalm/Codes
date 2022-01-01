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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head)
            return head;
        ListNode* temp=head;
        int n=0;
        while(temp)
        {
            n++;
            temp=temp->next;
        }
        k=k%n;
        if(k==0)
            return head;
        ListNode* t1=head;
        for(int i=0;i<(n-k-1);i++)
            t1=t1->next;
        ListNode* root=new ListNode(0);
        ListNode* h2=t1->next;
        root->next=h2;
        t1->next=NULL;
        while(h2->next)
            h2=h2->next;
        h2->next=head;
        return root->next;
    }
};