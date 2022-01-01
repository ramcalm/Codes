class Solution {
    public ListNode partition(ListNode head, int x) {
        ListNode less_head = new ListNode(0);
        ListNode less = less_head;
        ListNode great_head = new ListNode(0);
        ListNode great = great_head;
        while(head!=null){
            if(head.val<x){
                less.next = head;
                less=less.next;
            }
            else{
                great.next=head;
                great=great.next;
            }
            head=head.next;
        }
        great.next=null;
        less.next=great_head.next;
        return less_head.next;
    }
}