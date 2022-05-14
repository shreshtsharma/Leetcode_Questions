class Solution {
public:
    int divisorSubstrings(int num, int k) {
        int temp=num;
        int count=0;
        long int temp2=1;
        while(k!=0)
        {
            temp2*=10;
            k--;
        }
        while(temp>=temp2/10)
        {
            int div=temp%temp2;
            if(div!=0 && num%div==0)
            {
                    count++;
            }
            temp=temp/10;
        }
        return count;
    }
};