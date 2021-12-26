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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        // min priority queue
        auto cmp = [](ListNode* a, ListNode* b){return a->val > b->val;};
        priority_queue<ListNode*, vector<ListNode*>, decltype(cmp)> q(cmp);
        
        for(int i = 0; i < lists.size(); i++)
            if(lists[i] != nullptr) 
                q.push(lists[i]);
        ListNode* dummy = new ListNode(0);
        ListNode* cursor = dummy;
        while(!q.empty()){
            ListNode* curr = q.top();
            q.pop();
            if(curr->next != nullptr) q.push(curr->next);
            cursor->next = curr;
            cursor = curr;
        }
        return dummy->next;
    }
};