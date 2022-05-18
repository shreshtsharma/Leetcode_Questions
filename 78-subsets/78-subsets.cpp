class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> vec;
        vector<int>temp;
        permutations(nums,vec,temp,0);
        return vec;
    }
   void  permutations(vector<int>&nums,vector<vector<int>>& vec,vector<int>&temp,int ind)
   {
       if(ind==nums.size())
       {
           vec.push_back(temp);
           return;
       }
       temp.push_back(nums[ind]);
       permutations(nums,vec,temp,ind+1);
       temp.pop_back();
       permutations(nums,vec,temp,ind+1);
   }
};