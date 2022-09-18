class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0)
        {
            return {};
        }
        unordered_map <char,string> mp;
        mp['2']="abc";
        mp['3']="def";
        mp['4']="ghi";
        mp['5']="jkl";
        mp['6']="mno";
        mp['7']="pqrs";
        mp['8']="tuv";
        mp['9']="wxyz";
        vector<string> vec;
        string str;
        solve(mp,vec,digits,str,0);
        return vec;

    }
    void solve(unordered_map<char,string> mp,vector<string> & vec,string digits,string str,int ind)
    {
        if(str.size()>=digits.size())
        {
            vec.push_back(str);
            return;
        }
        
        string temp=mp[digits[ind]];
        for(int j=0;j<temp.size();j++)
        {
            str.push_back(temp[j]);
            solve(mp,vec,digits,str,ind+1);
            str.pop_back();
        }
    }
};