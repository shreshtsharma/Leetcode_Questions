#define MOD 1000000007
class Solution {
public:

    int countHomogenous(string s) {
        int len=s.size();
        if(len==0 || len==1)
        return len;

        int i=0,j=1;
        long ans=0;
        while(j<len)
        {
            if(s[i]!=s[j])
            {
                int n=j-i;
                ans+=(long long)n*(n+1)/2%MOD;
                i=j;
            }
            j++;
        }
        int n=len-i;
        ans+=(long long)n*(n+1)/2%MOD;
        ans%=MOD;
        return (int)ans;
    }
};