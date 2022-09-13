class Solution {
public:
    vector<string> generateParenthesis(int n) {
        int open=n,close=n;
        string s;
        vector<string> str;
        solve(open,close,s,str);
        return str;
    }
    void solve(int open,int close,string s,vector<string> &str)
    {
        if(open==0 && close==0)
        {
            str.push_back(s);
            return;
        }
        else
        {
            if(open==close)
            {
                s.push_back('(');
                solve(open-1,close,s,str);
            }
            if(close>open)
            {
                if(open!=0){
                s.push_back('(');
                solve(open-1,close,s,str);
                s.pop_back();
                }
                s.push_back(')');
                solve(open,close-1,s,str);
            }
        }
    }
};