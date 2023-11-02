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
    vector<int> findMode(TreeNode* root) {
        vector<int>vec,res;
        if(!root)
        return res;
        inorder(root,vec);
        int cnt=1,maxi=1;
        for(int i=1;i<vec.size();i++)
        {
            if(vec[i]==vec[i-1])
            {
                cnt++;
            }
            else
            {
                if(cnt>maxi)
                {
                    maxi=cnt;
                    res.clear();
                    res.push_back(vec[i-1]);
                    cnt=1;
                }
                else if(cnt==maxi)
                {
                    res.push_back(vec[i-1]);
                    cnt=1;
                }
                else
                cnt=1;
            }

        }
        int n=vec.size();
        if(cnt>maxi)
                {
                    maxi=cnt;
                    res.clear();
                    res.push_back(vec[n-1]);
                    cnt=1;
                }
                else if(cnt==maxi)
                {
                    res.push_back(vec[n-1]);
                    cnt=1;
                }
                else
                cnt=1;

            return res;

    }
    void inorder(TreeNode* root,vector<int> &vec)
    {
        if(!root)
        {
            return;
        }
        inorder(root->left,vec);
        vec.push_back(root->val);
        inorder(root->right,vec);
    }
};