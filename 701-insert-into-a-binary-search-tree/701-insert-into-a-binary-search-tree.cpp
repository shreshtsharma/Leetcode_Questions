/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* NewNode=new TreeNode;
        TreeNode* temp=root;
        TreeNode* r;
        while(temp!=NULL)
        {
            r=temp;
            if(temp->val<val)
            {
                temp=temp->right;
            }
            else if(temp->val>val)
            {
                temp=temp->left;
            }
        }
        if(root==NULL)
        {
             NewNode->val=val;
            NewNode->right=NULL;
            NewNode->left=NULL;
            root=NewNode;
            return root;
        }
        else if(r->val<val)
        {
            NewNode->val=val;
            r->right=NewNode;
            NewNode->right=NULL;
            NewNode->left=NULL;
            return root;
        }
        else
        {
            NewNode->val=val;
            r->left=NewNode;
            NewNode->right=NULL;
            NewNode->left=NULL;
            return root;   
        }
    }
};