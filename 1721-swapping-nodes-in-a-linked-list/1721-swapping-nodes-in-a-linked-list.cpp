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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* ind1=head;
        ListNode* ind2=head;
        ListNode* ptr=head;
        int length=1;
        for(int i=1;i<k;i++)
        {
            ind1=ind1->next;
        }
        while(ptr!=NULL)
        {
            ptr=ptr->next;
            length++;
        }
        for(int i=1;i<length-k;i++)
        {
            ind2=ind2->next;
        }
        int temp=ind1->val;
        ind1->val=ind2->val;
        ind2->val=temp;
        
        return head;
    }
};