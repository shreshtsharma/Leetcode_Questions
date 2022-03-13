class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i=0;i<s.length();i++)
        {
            if(s.length()==0 || s.length()==1)
            {
                return false;
            }
            if(s[i]=='('|| s[i]=='['||s[i]=='{')
            {
                st.push(s[i]);
                
            }
           
            else  
            {
                if(st.empty() || (st.top()=='(' && s[i]!=')') || (st.top()=='{' && s[i]!='}') || (st.top()=='[' && s[i]!=']'))
                    return false;
                st.pop(); 
            
            }
        }
        if(st.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};