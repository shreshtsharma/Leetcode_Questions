class Solution {
public:
    //using sliding window approach.
    int maxVowels(string s, int k) {
        int i=0,j=0;
        int max=0,count=0;
        //traversing first window of size k
        for(j;j<k;j++)
        {
            if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u')
            {
                count++;
            }
        }
        j--;
        max=count;
        // cout<<ma<<x;
        while(j<s.size())
        {
            j++;
            if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u')
            {
                count++;
            }
             if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
             {
                 count--;
             }
              if(max<count)
            {
                max=count;
                  cout<<max<<endl;
            }
             cout<<max<<endl;
            i++;
          
        }
        return max;
    }
};
