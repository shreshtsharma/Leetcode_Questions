/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(root==NULL)
        {
            return root;
        }
        queue<Node*> q;
        Node* cur;
        q.push(root);
        q.push(NULL);
        while(!q.empty())
        {
            cur=q.front();
            q.pop();
            if(cur==NULL)
            {
                if(q.empty())
                {
                    continue;
                }
                q.push(NULL);
            }
            else if(cur!=NULL)
            {
                 cur->next=q.front();
                 if(cur->left)
                 {
                     q.push(cur->left);
                 }
                 if(cur->right)
                 {
                     q.push(cur->right);
                 }
            }
        }
        return root;
    }
};