
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL ||k==0)
        {
         return head;   
        }
        int len=1;
        ListNode* ptr=head;
        ListNode* ptr2=head;
        while(ptr->next!=NULL)
        {
            len++;
            ptr=ptr->next;
        }
        if(k%len==0)
        {
            return head;
        }
        k=k%len;
        //making a cycle 
        ptr->next=head;
        for(int i=0;i<len-k-1;i++)
        {
            ptr2=ptr2->next;
            
        }
        head=ptr2->next;
        ptr2->next=NULL;
        return head;
    }
};