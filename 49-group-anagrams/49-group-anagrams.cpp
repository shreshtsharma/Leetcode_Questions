class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>,vector<string>> mp;
        for(int i=0;i<strs.size();i++)
        {
            vector<int> v(26,0);
            for(int j=0;j<strs[i].size();j++)
            {
                v[strs[i][j]-'a']++;
            }
            mp[v].push_back(strs[i]);
        }
        vector<vector<string>> vec;
        for(auto it:mp)
        {
            vec.push_back(it.second);
        }
        return vec;
    }
};