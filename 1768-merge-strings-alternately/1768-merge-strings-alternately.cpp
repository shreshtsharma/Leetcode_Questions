class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0;
        int j=0;
        string res;
        for(; i<word1.size() && j<word2.size();i++,j++)
        {
            res.push_back(word1[i]);
            res.push_back(word2[j]);
        }
        if(i!=word1.size())
        {
            for(;i<word1.size();i++)
            {
                res.push_back(word1[i]);
            }
        }
        else if(j!=word2.size())
        {
            for(;j<word2.size();j++)
            {
                res.push_back(word2[j]);
            }
        }
        return res;
    }
};