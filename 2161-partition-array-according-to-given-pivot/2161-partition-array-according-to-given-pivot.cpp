class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int count=0;
        vector<int> vec1;
        vector<int> vec2;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<pivot)
                vec1.push_back(nums[i]);
            else if(nums[i]>pivot)
                vec2.push_back(nums[i]);
            else
                count++;
        }
        int i;
        for( i=0;i<vec1.size();i++)
        {
            nums[i]=vec1[i];
        }
        while(count>0)
        {
            nums[i]=pivot;
            i++;
            count--;
        }
        for(int j=0;j<vec2.size();j++)
        {
            nums[i++]=vec2[j];
        }
        return nums;
    }
};