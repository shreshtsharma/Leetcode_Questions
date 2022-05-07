class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        stack<int> st;
        int min=INT_MIN;
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(nums[i]<min)
            {
                return true;
            }
            if(st.empty() )
            {
                st.push(nums[i]);
            }
            else{
             while(!st.empty() && nums[i]>st.top())
             {
                 min=st.top();
                 st.pop();
                 
             }
                st.push(nums[i]);
            }
           
        }
        return false;
    }
};