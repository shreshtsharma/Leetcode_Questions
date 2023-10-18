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
class node{
    public:
    int maxi;
    int mini;
    int maxsum;
    node(int maxi,int mini,int maxsum)
    {
        this->maxi=maxi;
        this->mini=mini;
        this->maxsum=maxsum;
    }
};
class Solution {
public:
int ans=0;
    node helper(TreeNode* root)
    {
        if(!root)
        {
            // maxi=INT_MIN kyunki left ka max root se chota hona chahiye
            // mini=INT_MAX kyunki right ka min root se bda hona chahiye
            // agar valid BST h to
            return node(INT_MIN,INT_MAX,0);
        }
        node left=helper(root->left);
        node right=helper(root->right);
        // agar current node ek valid bst ka root h to
        if(left.maxi<root->val && root->val<right.mini)
        {
            // maxi ab hojaega max of current node and right max kyunki
            // right mein hi bade number honge similarly for mini;
            int sum=root->val+left.maxsum+right.maxsum;
            ans=max(sum,ans);
            return node(max(root->val,right.maxi),min(root->val,left.mini),sum);
          
        }
        // agar current node valid bst ka part nahi h to
        else
        {
            return node(INT_MAX,INT_MIN,max(left.maxsum,right.maxsum));
        }
    }
    int maxSumBST(TreeNode* root) {
        ans=0;
        helper(root);
        return ans;
    }

};