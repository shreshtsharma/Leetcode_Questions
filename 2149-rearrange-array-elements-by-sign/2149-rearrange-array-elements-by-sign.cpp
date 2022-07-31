class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>=0)
                pos.push_back(nums[i]);
            else
                neg.push_back(nums[i]);
        }
        int posind=0;
        int negind=0;
        for(int i=0;i<nums.size();i++)
        {
            if(i%2==0)
                nums[i]=pos[posind++];
            else
                nums[i]=neg[negind++];
        }
        return nums;
    }
};