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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode*head=NULL;
 while(l1!=NULL || l2!=NULL)
   {
     if(l1==NULL)
     {
         head=insert(head,l2->val);
         l2=l2->next;
     }
     else if(l2==NULL)
     {
         head=insert(head,l1->val);
         l1=l1->next;
     }
      else if(l1->val<=l2->val  )
      {     
          head=insert(head,l1->val);
          l1=l1->next;
      }
     else if(l2->val<l1->val  )
      {
          head=insert(head,l2->val);
          l2=l2->next;
      }
    }
        return head;
  }
    ListNode* insert(ListNode*head,int val)
    {
        ListNode* temp=head;
        
        if(head==NULL)
        {
            ListNode* ptr=new ListNode;
            ptr->val=val;
            ptr->next=NULL;
            head=ptr;

        }
        else
        {
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            ListNode* ptr=new ListNode;
            ptr->val=val;
            ptr->next=NULL;
            temp->next=ptr;
        }
        return head;
    }
};