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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* ptr1=head;
        ListNode* ptr2=head;
        ListNode* temp;
        while(ptr1!=NULL)
        {
            if(ptr1->val==val && ptr1==head)
            {
                temp=ptr1;
                ptr1=ptr1->next;
                head=ptr1;
                ptr2=ptr1;
                delete temp;
                continue;
            }
            if(ptr1->val==val && ptr1->next==NULL)
            {
                temp=ptr1;
                ptr2->next= NULL;
                delete temp;
                return head;
            }
            else if(ptr1->val==val)
            {
                temp=ptr1;
                ptr1=ptr1->next;
                ptr2->next=ptr1;
                delete temp;
            }
            else 
            {
                ptr2=ptr1;
                ptr1=ptr1->next;
            }
        }
        return head;
    }       
};