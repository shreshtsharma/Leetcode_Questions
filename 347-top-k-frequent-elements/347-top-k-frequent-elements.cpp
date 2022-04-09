
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map <int,int> mp;
    priority_queue <pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> minheap;
    vector<int> arr;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(auto i=mp.begin();i!=mp.end();i++)
        {
             minheap.push(make_pair(i->second, i->first));
            if(minheap.size()>k)
            {
                minheap.pop();
            }
        }
        while(minheap.size()>0)
        {
            arr.push_back(minheap.top().second);
            minheap.pop();
          
        }
        return arr;
    }
};
