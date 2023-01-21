class Solution {
public:
    int minOperations(int n) {
        vector<int> arr;
        int k=(1+2*(n-1) +1)/2;
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=abs(k-(2*i+1));
        }
        return sum/2;
    }
};