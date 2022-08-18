class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='A' && s[i]<='Z')
            {
                char temp=tolower(s[i]);
                str.push_back(temp);
            }
            else if(s[i]>='a' && s[i]<='z')
            {
                str.push_back(s[i]);
            }
            else if(s[i]>='0' && s[i]<='9')
            {
                str.push_back(s[i]);
            }
        }
        return solve(str);
    }
    bool solve(string str)
    {
       int i=0;
        int j=str.size()-1;
        while(i<=j)
        {
            if(str[i]!=str[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
        
    }
};