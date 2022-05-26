class Solution {
public:
    bool isHappy(int n) {
        int x=n,sum=0;
        while(1)
        {
            sum=0;
            while(x!=0)
            {
                sum+=(x%10)*(x%10);
                x/=10;
            }
           
            if(sum==1)
                return 1;
            else if(sum==7)
                return 1;
            else if(sum<=9)
            {
                return 0;
            }
            x=sum;
        }
        return 0;
        
    }
};