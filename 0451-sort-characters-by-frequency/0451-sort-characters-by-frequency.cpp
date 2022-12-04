class Solution {
public:
    static bool comp(pair<char,int> &a,pair<char,int> &b)
    {
        if(a.second==b.second)
        return a.first<b.first;
        return a.second>b.second;
    }
    string frequencySort(string s) {
        map<char,int> mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        vector<pair<char,int>> vec;
        for(auto i=mp.begin();i!=mp.end();i++)
        {
            vec.push_back({i->first,i->second});
        }
        string res;
        sort(vec.begin(), vec.end(),comp);
        for(auto i=vec.begin();i!=vec.end();i++)
        {
            while(i->second!=0)
            {
                res.push_back(i->first);
                i->second--;
            }
        }
        return res;
    }

};