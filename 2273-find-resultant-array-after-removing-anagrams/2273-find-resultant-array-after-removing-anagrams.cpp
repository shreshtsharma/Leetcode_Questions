class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        int i=0,j=1;
        while(j<words.size())
        {
            while(j<words.size() && isanagram(words[i],words[j]))
            {
                words.erase(words.begin()+j);
            }
            i++,j++;
        }
        return words;
    }
    bool isanagram(string a,string b)
    {
        if(a.size()!=b.size())
        {
            return false;
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        for(int i=0;i<a.size();i++)
        {
            if(a[i]!=b[i])
                return false;
        }
        return true;
    }
};