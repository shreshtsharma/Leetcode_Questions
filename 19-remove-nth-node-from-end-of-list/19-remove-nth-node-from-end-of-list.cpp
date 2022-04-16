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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* ptr=head;
        int count=0;
        while(ptr!=NULL)
        {
            count++;
            ptr=ptr->next;
        }
        int pos=count-n;
        ptr=head;
        if(pos==0)
        {
            head=head->next;
            return head;
        }
        ListNode* temp=NULL;
        for(int i=0;i<pos;i++)
        {
            temp=ptr;
            ptr=ptr->next;
        }
        temp->next=ptr->next;
        delete ptr;
        return head;
        
    }
};