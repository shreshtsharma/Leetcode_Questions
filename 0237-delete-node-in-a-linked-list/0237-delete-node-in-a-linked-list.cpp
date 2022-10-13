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
    void deleteNode(ListNode* node) {
        ListNode*temp=node;
        ListNode* q=NULL;
        while(temp->next!=NULL)
        {
            temp->val=temp->next->val;
            q=temp;
            temp=temp->next;
        }
        delete(temp);
        q->next=NULL;
    }
};