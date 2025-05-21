class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int>mp;
        for(int i=0;i<numbers.size();i++)
        {
            int tar;
            tar=target-numbers[i];
            if(mp.find(tar)!=mp.end())
            {
                return {mp[tar],i+1};
            }
            mp[numbers[i]]=i+1;
        }
        return {0,0};
    }
};