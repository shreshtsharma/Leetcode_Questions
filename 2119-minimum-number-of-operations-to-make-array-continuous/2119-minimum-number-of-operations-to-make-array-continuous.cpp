class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size();
        int res=n;
        set<int> st(nums.begin(),nums.end());
        vector<int> vec;
        for(int num:st)
        {
            vec.push_back(num);
        }
        
        for(int i=0;i<vec.size();i++)
        {
            int left=vec[i];
            int right=left+n-1;
            int j=upper_bound(vec.begin(),vec.end(),right)-vec.begin();
            int count=j-i;
            res=min(res, n-count);
        }
        return res;
    }
   
};