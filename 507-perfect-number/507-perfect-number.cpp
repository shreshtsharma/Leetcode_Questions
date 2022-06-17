class Solution {
public:
    bool checkPerfectNumber(int num) {
       long int sum=0;
        long int i=1;
        
        while(i<=num/2)
        {
            if(num%i==0)
            {
                sum+=i;
                // cout<<i;
            }
            i++;
        }
        if(num==sum)
            return true;
        return false;
    }
};