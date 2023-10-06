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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL)
        return NULL;

        if(root->val==key)
        {
            // 0 child
            if(root->left==NULL && root->right==NULL)
            {
                delete root;
                return NULL;
            }
            // 1 child
            else if(root->left!=NULL && root->right==NULL)
            {
                TreeNode * temp=root->left;
                delete(root);
                return temp;
            }
            else if(root->left==NULL && root->right!=NULL)
            {
                TreeNode* temp=root->right;
                delete(root);
                return temp;
            }
            // 2 child
            else
            {
                TreeNode* temp=findRightMin(root->right);
                root->val=temp->val;
                root->right=deleteNode(root->right,temp->val);
            }
        }
        else if(key<root->val)
        {
            root->left=deleteNode(root->left,key);
        }
        else if(key>root->val)
        {
            root->right=deleteNode(root->right,key);
        }
        return root;
    }
    TreeNode* findRightMin(TreeNode* root)
    {
        while(root->left!=NULL)
        {
            root=root->left;
        }
        return root;
    }
};