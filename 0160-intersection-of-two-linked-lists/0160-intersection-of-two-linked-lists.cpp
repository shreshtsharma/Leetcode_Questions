/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int len1=0,len2=0;
        ListNode* temp=headA;
        while(temp!=NULL)
        {
            len1++;
            temp=temp->next;
        }
        temp=headB;
        while(temp!=NULL)
        {
            len2++;
            temp=temp->next;
        }
        int fg;
        if(len1>len2)
            fg=1;
        else 
            fg=2;
        
        ListNode* temp1=headA;
        ListNode*temp2=headB;
        if(fg==1)
        {
            for(int i=0;i<abs(len1-len2);i++)
            {
                temp1=temp1->next;
            }
        }
        else
        {
            for(int i=0;i<abs(len1-len2);i++)
            {
                temp2=temp2->next;
            }
        }
        while(temp1!=NULL && temp2!=NULL)
        {
            if(temp1==temp2)
                return temp1;
            
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return NULL;
        
    }
};