class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i=0,j=0;
        vector <int> arr;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums.at(i)+nums.at(j)==target)
                {
                    arr.push_back(i);
                    arr.push_back(j);
                    break;
                }
            }
        }
        return arr;
        
    }
};