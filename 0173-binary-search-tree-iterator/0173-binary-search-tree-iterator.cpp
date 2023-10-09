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
class BSTIterator {
public:
TreeNode* curr;

    BSTIterator(TreeNode* root) {
       curr=root;
    
    }
    
    int next() {
        int ans=0;
        while(curr)
        {
            if(curr->left==NULL)
            {
                ans=curr->val;
           
                curr=curr->right;
                break;
            }
            else
            {
                TreeNode* temp=curr->left;
                while(temp->right!=NULL && temp->right!=curr)
                {
                    temp=temp->right;
                }
                if(temp->right==NULL)
                {
                    temp->right=curr;
                    curr=curr->left;
                }
                else
                {
                    ans=curr->val;
                    temp->right=NULL;
          
                    curr=curr->right;
                    break;
                }
            }
        }
        return ans;

    }
    
    bool hasNext() {
        if(curr==NULL)
        return false;
        else
        return true;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */