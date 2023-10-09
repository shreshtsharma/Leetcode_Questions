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
    vector<int> inorderTraversal(TreeNode* root) {
        TreeNode* curr=root;
        vector<int> vec;
        if(!root)
        return vec;
        while(curr)
        {
            if(curr->left==NULL)
            {
                vec.push_back(curr->val);
                curr=curr->right;
            }
            else{

                TreeNode* temp=curr->left;
                while(temp->right!=NULL && temp->right!=curr)
                {
                    temp=temp->right;
                }
                if(temp->right==curr)
                {
                    vec.push_back(curr->val);
                    temp->right=NULL;
                    curr=curr->right;
                }
                else
                {
                    temp->right=curr;
                    curr=curr->left;
                }

            }
         
        }
           return vec;
    }
};