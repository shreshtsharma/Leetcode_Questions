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
    bool findTarget(TreeNode* root, int k) {
        vector<int> arr;
        inorder(root,arr);
        int left=0,right=arr.size()-1;
        int sum=0;
        while(left<right)
        {
            sum=arr[left]+arr[right];
            if(sum==k)
                return true;
            else if(sum>k)
                right--;
            else
                left++;
        }
        return false;
    }
    void inorder (TreeNode*root,vector<int> &arr)
    {
        if(!root)
        {
            return;
        }
        inorder(root->left,arr);
        arr.push_back(root->val);
        inorder(root->right,arr);
    }
};