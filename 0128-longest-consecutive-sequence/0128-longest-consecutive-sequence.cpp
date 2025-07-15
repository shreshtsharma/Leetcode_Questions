class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int count=0;
        int maxcount=0;
        unordered_set<int>st;
        for(int i=0;i<nums.size();i++)
        {
            st.insert(nums[i]);
        }
        for(auto it:st)
        {
            int x=it;
            if(st.find(x-1)==st.end())
            {
                while(st.find(x)!=st.end())
                {
                    count++;
                    x+=1;
                }
                maxcount=max(count,maxcount);
                count=0;
            }
        }
        return maxcount;
    }
};