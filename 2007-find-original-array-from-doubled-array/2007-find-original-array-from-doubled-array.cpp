class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        unordered_map<int,int> mp;
        sort(changed.begin(),changed.end());
        vector<int> vec;
        if(changed.size()%2!=0)
        {
            return vec;
        }
        for(int i=0;i<changed.size();i++)
        {
            mp[changed[i]]++;
        }
        for(int i=0;i<changed.size();i++)
        {
            if(mp.find(changed[i]*2)!=mp.end() && mp[changed[i]*2]>0 && mp[changed[i]]>0)
            {
                vec.push_back(changed[i]);
                mp[changed[i]]--;
                mp[changed[i]*2]--;
            
            }
        }
        for(auto it: mp)
        {
            if(it.second!=0)
                return {};
        }
        return vec;
    }
};