/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        queue<TreeNode*> q;
        string str;
        if(!root)
        return str;
        q.push(root);
        while(!q.empty())
        {
            int len=q.size();
            for(int i=0;i<len;i++)
            {
                TreeNode* temp=q.front();
                if(temp!=NULL)
                {
                    string s=to_string(temp->val);
                    str+=s+'#';
                }
                else
                {
                    str.push_back('n');
                    str.push_back('#');
                }
                if(temp!=NULL && temp->left!=NULL)
                q.push(temp->left);
                else if(temp!=NULL)
                {
                    q.push(NULL);
                }
                if(temp!=NULL && temp->right!=NULL)
                {
                    q.push(temp->right);
                }
                else if(temp!=NULL)
                {
                    q.push(NULL);
                }
                q.pop();
            }
        }
        return str;
        
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string str) {
        if(str.empty())
        return NULL;
        int i=0;
        int num1=0;
        int fg=0;
        while(str[i]!='#')
        {
            if(str[i]=='-')
            {
                fg=1;
            }
            else
            {
                num1=num1*10+(str[i]-'0');
            }
            i++;
        }
        if(fg==1)
        num1*=-1;
        TreeNode* root=new TreeNode(num1);
        queue<TreeNode*>q;
        q.push(root);
        i++;
        while(!q.empty() && i<str.size())
        {
            TreeNode* temp=q.front();
            if(str[i]=='n')
            {
                temp->left=NULL;
                i+=2;
            }
            else
            {
                int num=0;
                fg=0;
                while(str[i]!='#')
                {
                    if(str[i]=='-')
                    {
                        fg=1;
                    }
                    else
                    num=num*10+(str[i]-'0');

                    i++;
                }
                if(fg==1)
                num*=-1;
                TreeNode* newnode=new TreeNode(num);
                temp->left=newnode;
                q.push(newnode);
                i++;
            }
            fg=0;
            if(str[i]=='n')
            {
                temp->right=NULL;
                i+=2;
            }
            else
            {
                int num=0;
                while(str[i]!='#')
                {
                    if(str[i]=='-')
                    fg=1;
                    else
                    num=num*10+(str[i]-'0');

                    i++;
                }
                if(fg==1)
                num*=-1;
                TreeNode* newnode=new TreeNode(num);
                temp->right=newnode;
                q.push(newnode);
                i++;
            }
           q.pop();
        }
        return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));