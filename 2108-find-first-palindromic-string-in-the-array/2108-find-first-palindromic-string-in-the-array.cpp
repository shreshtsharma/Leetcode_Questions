class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        bool res;
        for(int i=0;i<words.size();i++)
        {
         res=pallindrome(words[i]);  
            if(res==true)
            {
                return words[i];
            }
        }
        return "";
    
    }
    bool pallindrome(string word)
    {
        int start=0;
        int end=word.size()-1;
        for(int start=0;start<=word.size()/2;start++,end--)
        {
            if(word[start]!=word[end])
            {
                return false;
            }
        }
        return true;
    }
};