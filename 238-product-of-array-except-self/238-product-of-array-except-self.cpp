class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> vec1(n,1),vec2(n,1),ans;
        for(int i=1;i<n;i++)
        {
            vec1[i]=nums[i-1]*vec1[i-1];
        }
        for(int i=n-2;i>=0;i--)
        {
            vec2[i]=vec2[i+1]*nums[i+1];
        }
        for(int i=0;i<n;i++)
        {
            ans.push_back(vec1[i]*vec2[i]);
        }
        return ans;
            
    }
};