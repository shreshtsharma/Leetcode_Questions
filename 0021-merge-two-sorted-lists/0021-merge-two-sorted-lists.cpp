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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* l1=list1;
        ListNode* l2=list2;
        if(!l1 && !l2)
        {
            return NULL;
        }
        else if(!l1)
        {
            return l2;
        }
        else if(!l2)
        {
            return l1;
        }
        ListNode * head=new ListNode();
        ListNode* temp=head;
        if (l1->val <= l2->val) {
        head->next = l1;
        l1 = l1->next;
        } else {
        head->next = l2;
        l2 = l2->next;
        }
        temp=temp->next;
        while(l1 || l2)
        {
            if(l1 && l2)
            {
                if(l1->val<=l2->val)
                {
                    temp->next=l1;
                    l1=l1->next;
                    temp=temp->next;
                }
                else
                {
                    temp->next=l2;
                    l2=l2->next;
                    temp=temp->next;
                }
            }
            else if(l1)
            {
                temp->next=l1;
                return head->next;
            }
            else{
                temp->next=l2;
                return head->next;
            }
        }
        return head->next;

    }
};