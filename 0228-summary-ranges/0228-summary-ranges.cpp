class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string>res;
        int ptr1=0;
        int ptr2=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]==nums[i]-1)
            {
                ptr2++;
            }
            else
            {
                if(ptr1==ptr2)
                {
                    res.push_back(to_string(nums[ptr1]));
                }
                else
                {
                    string str=to_string(nums[ptr1])+"->" + to_string(nums[ptr2]);
                    res.push_back(str);
                }
                ptr1=i;
                ptr2=i;
            }
        }
        if(ptr1<nums.size() && ptr2<nums.size())
        {
            if(ptr1==ptr2)
                {
                    res.push_back(to_string(nums[ptr1]));
                }
                else
                {
                    string str=to_string(nums[ptr1])+"->" + to_string(nums[ptr2]);
                    res.push_back(str);
                }
        }
        return res;
    }
};