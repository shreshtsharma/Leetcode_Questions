class Solution {
public:
    string capitalizeTitle(string title) {
        int flag=1;
        for(int i=0;i<title.size();i++)
        {
            if(flag==1 )
            {
                if(title[i]>='a' && title[i]<='z')
                {
                    title[i]-=32;
                }
                flag=0;
                continue;
            }
            else if(flag==0)
            {
                if(title[i]==' ')
                {
                    flag=1;
                    continue;
                }
                else if(title[i]>='A' && title[i]<='Z')
                {
                    title[i]+=32;
                }
            }
        }
        string temp="";
        int i=0;
         for(i=0;i<title.size();i++)
           {
               if(title[i]!=' ')
               {
                   temp+=title[i];
               }else
               {
                   if(temp.size()<3)  //if an string is lees than size 3 then convert its first char into lowercase
                   {
                       title[i-temp.size()]=tolower(title[i-temp.size()]);
                   }
                   temp="";
               }
           }
                  if(temp.size()<3)
                   {
                       title[i-temp.size()]=tolower(title[i-temp.size()]);
                   }

        return title;
    }
};