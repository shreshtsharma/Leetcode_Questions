class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1.size()!=s2.size())
            return false;
        int ind1=0,ind2=0;
        int count=0;
        for(int i=0;i<s1.size();i++)
        {   
            if(count>2)
            return false;
            else if(s1[i]!=s2[i] && count==0)
            {
                ind1=i;
                count++;
            }
            else if(s1[i]!=s2[i] && count==1)
            {
                    ind2=i;
                    count++;
            }
            else if(s1[i]!=s2[i])
                count++;
        }
        if(count==0)
            return true;
        if(count>2)
            return false;
        if(s1[ind1]!=s2[ind2] || s1[ind2]!=s2[ind1])
            return false;
        else
            return true;
    }
};