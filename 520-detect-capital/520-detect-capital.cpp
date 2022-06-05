class Solution {
public:
    bool detectCapitalUse(string word) {
        int count1=0;
        int count2=0;
        if(word[0]>='A' && word[0]<='Z')
        {
            for(int i=1;i<word.size();i++)
            {
                if(word[i]>='A' && word[i]<='Z')
                {
                    count1++;
                }
                else 
                    count2++;
            }
            if(count1!=0 && count2==0)
              return  true;
            else if(count1==0 && count2!=0)
                 return true;
            else if(count1==0 && count2==0)
                return true;
            else
                return false;
        }
        else if(word[0]>='a' && word[0]<='z')
        {
            for(int i=1;i<word.size();i++)
            {
                if(word[i]>='A' && word[i]<='Z')
                    return false;
            }
        }
        return true;
    }
};