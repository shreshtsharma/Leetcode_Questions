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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
       vector<vector<int>> res;
       if(!root)
       return res;
       queue<TreeNode*>q;
       q.push(root);
       int fg=0;
       while(!q.empty())
       {
           int len=q.size();
           vector<int> vec;
           for(int i=0;i<len;i++)
           {
               TreeNode* temp=q.front();
               q.pop();
                if(temp->left)q.push(temp->left);
                if(temp->right)q.push(temp->right);
               
               vec.push_back(temp->val);
           }
           if(fg==1)
           reverse(vec.begin(),vec.end());
           res.push_back(vec);
           fg=!fg;
       }
       return res;

    }
};