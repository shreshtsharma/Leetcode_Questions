class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
         //not optimized approach
        vector<int> arr;
        vector<vector<int>> vec;
        int freq[nums.size()];
        for(int i=0;i<nums.size();i++)
        {
            freq[i]=0;
        }
        solve(nums,arr,vec,freq,0);
        return vec;
    }
    void solve(vector<int> nums,vector<int> arr,vector<vector<int>> &vec,int freq[],int ind )
    {
        if(arr.size()==nums.size())
        {
            vec.push_back(arr);
            return;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(freq[i]==0){
                arr.push_back(nums[i]);
                freq[i]=1;
                solve(nums,arr,vec,freq,ind+1);
                arr.pop_back();
                freq[i]=0;
            }
        }
    }
};