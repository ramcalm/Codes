class Solution {
    public ListNode removeNthFromEnd(ListNode head, int n) {
        ListNode header=new ListNode(0);
        header.next=head;
        ListNode first=header;
        ListNode second=header;
        for(int i=1;i<=n+1;i++)
        {
            first=first.next;
        }
        while(first!=null)
        {
            first=first.next;
            second=second.next;      
        }
        second.next=second.next.next;
        return header.next;
    }
}