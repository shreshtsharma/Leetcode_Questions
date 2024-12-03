class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> triplets;

        // sorting the array coz we don't want to find the duplicate pair so that we can 
        // skip the duplicate element for which we have already found a triplet
        sort(nums.begin(),nums.end());

        for(int i=0;i<nums.size();i++)
        {
            if(i!=0 && nums[i]==nums[i-1]) // that means we found a duplicate element there
            continue; //just cut that shit out !!

            //find a pair if it exists whose sum is complement to nums[i]
           
            int j=i+1;
            int k=nums.size()-1;
            while(j<k)
            {
                int sum=nums[i]+nums[j]+nums[k];
                if(sum==0){
                triplets.push_back({nums[i],nums[j],nums[k]});
                j++;
                k--;

                while(j<k && nums[j]==nums[j-1])j++;
                while(j<k && nums[k]==nums[k+1])k--;
                }
                else if(sum>0)
                {
                    k--;
                }
                else
                {
                    j++;
                }

            }
            
        }
        return triplets;

    }
};