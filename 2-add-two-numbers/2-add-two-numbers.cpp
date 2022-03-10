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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        int sum=0;
        ListNode*head=NULL;
        while(l1!=NULL || l2!=NULL)
        {   
            sum=0;
            if(l1==NULL)
            {
                sum+=l2->val;
                l2=l2->next;
            }
            else if(l2==NULL)
            {
                sum+=l1->val;
                l1=l1->next;
            }
            else{
            sum=l1->val+l2->val;
                l1=l1->next;
                l2=l2->next;
            }
             head=insert((sum+carry)%10,head);
            carry=(sum+carry)/10;
        }
        if(carry>0)
        head=insert(carry,head);
     return head;
    }
    
    ListNode* insert(int num,ListNode* head)
    {
    
        int i=0;
        ListNode*ptr1=head;
            if(head==NULL)
            {
                ListNode*ptr=new ListNode;
                ptr->val=num;
                ptr->next=NULL;
                // cout<<ptr->val;
                head=ptr;
            }
            else
            {
                while(ptr1->next!=NULL)
                {
                    ptr1=ptr1->next;
                }
                ListNode*New=new ListNode;
                New->val=num;
                New->next=NULL;
                ptr1->next=New;
            }
                return head;

        }
    
};