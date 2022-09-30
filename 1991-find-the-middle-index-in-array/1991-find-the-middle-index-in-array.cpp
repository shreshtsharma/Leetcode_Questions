class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int> vec1(n,0);
        vector<int> vec2(n,0);
        int temp=0;
        for(int i=0;i<nums.size();i++)
        {
            temp+=nums[i];
            vec1[i]=temp;
        }
        temp=0;
        for(int j=n-1;j>=0;j--)
        {
            temp+=nums[j];
            vec2[j]=temp;
        }
        for(int i=0;i<n;i++)
            {
                if(vec1[i]==vec2[i])
                    return i;
            }
        return -1;
    }
};