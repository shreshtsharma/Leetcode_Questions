class Solution {
public:
    bool isPalindrome(int x) {
        int rem=0;
        long long int  num=x;
        long long int rev=0;
        if(x<0)
        {
            return false;
        }
        else
        {
            while(num)
            {
                rem=num%10;
                rev=rev*10 +rem;
                num=num/10;
            }
        }
        
        if(rev==x)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};