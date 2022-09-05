class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        int ans=-1;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(it->first==it->second)
            {
                if(ans<it->second)
                {
                    ans=it->second;
                }
            }
        }
        return ans;
    }
};