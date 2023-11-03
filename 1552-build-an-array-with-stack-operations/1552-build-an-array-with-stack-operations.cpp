class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> res;
        stack<int> st;
        int j=0;
        for(int i=1;i<=n && j<target.size();i++)
        {
            st.push(i);
            res.push_back("Push");
            if(i!=target[j])
            {
                st.pop();
                res.push_back("Pop");
            }
            else
            {
                j++;
            }
        }
        return res;
    }
};