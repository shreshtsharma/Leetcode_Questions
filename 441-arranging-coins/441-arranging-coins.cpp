class Solution {
public:
    int arrangeCoins(int n) {
      int count=0;
        int i=1;
        if(n==1)
        {
            return 1;
        }
        while(n-i>=0)
        {
            count++;
            n=n-i;
            i++;
        }
        return count;
    }
};