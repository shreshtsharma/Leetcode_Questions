/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* temp1=head;
        Node* list=new Node(0);
        Node* temp2=list;
        unordered_map<Node*,Node*>mp;
        int ind=0;
        while(temp1)
        {
            Node* newNode=new Node(temp1->val);
            temp2->next=newNode;
            mp[temp1]=newNode;
            temp2=temp2->next;
            temp1=temp1->next;
        }
        temp1=head;
        temp2=list->next;
        while(temp1)
        {
            Node* randNode=temp1->random;
            if(randNode)
            {
                temp2->random=mp[randNode];
            }
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return list->next;

    }
};