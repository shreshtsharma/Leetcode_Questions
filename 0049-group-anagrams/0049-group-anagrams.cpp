class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>,vector<string>>mp;
        for(int i=0;i<strs.size();i++)
        {
            vector<int> vec(26,0);
            for(int j=0;j<strs[i].size();j++)
            {
                vec[strs[i][j]-'a']++;
            }
            mp[vec].push_back(strs[i]);
        }
        vector<vector<string>> res;
        for(auto it:mp)
        {
            res.push_back(it.second);
        }
        return res;
    }
};