class Solution {
public:
    int subtractProductAndSum(int n) {
        long int pro=1;
        long int sum=0;
        while(n>0)
        {
            pro*=n%10;
            sum+=n%10;
            n=n/10;
        }
        return pro-sum;
    }
};