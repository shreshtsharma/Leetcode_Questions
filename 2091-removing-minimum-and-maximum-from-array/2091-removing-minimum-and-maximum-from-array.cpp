class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int temp_mini=INT_MAX;
        int temp_maxi=INT_MIN;
        int mini=0,maxi=0;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>temp_maxi)
            {
                temp_maxi=nums[i];
                maxi=i;
            }
            if(nums[i]<temp_mini)
            {
                temp_mini=nums[i];
                mini=i;
            }
        }
        cout<<maxi<<mini<<endl;
        int one,two,three;
        if(mini>maxi)
        {
            one=mini+1;
            three=nums.size()-maxi;
            two=maxi+(nums.size()-mini)+1;
        }
        else
        {
            one=maxi+1;
            three=nums.size()-mini;
            two=mini+(nums.size()-maxi)+1;
        }
        cout<<one<<" "<<two<<" "<<three;
        if(one<=two && one<=three)
        {
            return one;
        }
        else if(two<=one && two<=three)
        {
            return two;
        }
        else
        {
            return three;
        }
       
    }
};