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
int cnt=0,maxcnt=0,val=INT_MIN;
vector<int> res;
void inorder(TreeNode* root)
{
    if(!root)
    return ;
    inorder(root->left);
    if(val==root->val)
    {
        cnt++;
    }
    else
    {
        val=root->val;
        cnt=1;
    }
    if(cnt>maxcnt)
    {
        res.clear();
        res.push_back(val);
        maxcnt=cnt;
    }
    else if(cnt==maxcnt)
    {
        res.push_back(val);
    }
    inorder(root->right);
}
    vector<int> findMode(TreeNode* root) {
        // without using extra space
        inorder(root);
        return res;
    }

};