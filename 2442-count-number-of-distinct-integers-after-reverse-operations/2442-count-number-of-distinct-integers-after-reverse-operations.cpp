class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        set<int> st;
        for(int i=0;i<nums.size();i++)
        {
            st.insert(nums[i]);
            int temp=reverse(nums[i]);
            // cout<<temp<<" ";
            st.insert(temp);
        }
        return st.size();
        
    }
    int reverse(int n)
    {
        int temp=0;
        while(n>0)
        {
            temp=temp*10+n%10;
            n=n/10;
        }
        return temp;
    }
};