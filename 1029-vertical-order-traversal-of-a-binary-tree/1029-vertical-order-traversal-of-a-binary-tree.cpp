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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,vector<int>>mp;
        vector<vector<int>> res;
        if(!root)
        return res;
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        while(!q.empty())
        {
            int len=q.size();
            map<int,vector<int>>mp1;
            for(int i=0;i<len;i++)
            {
                pair<TreeNode*,int>temp=q.front();
                int level=temp.second;
                if(temp.first->left)q.push({temp.first->left,level-1});
                if(temp.first->right)q.push({temp.first->right,level+1});
                mp1[level].push_back(temp.first->val);
                q.pop();
            }
            for(auto it:mp1)
            {
                vector<int> vec=it.second;
                sort(vec.begin(),vec.end());
                for(int x=0;x<vec.size();x++)
                {
                    mp[it.first].push_back(vec[x]);
                }
            }
        }
        for(auto it:mp)
        {
            res.push_back(it.second);
        }
        return res;
    }
};