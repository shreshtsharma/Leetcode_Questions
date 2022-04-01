class Solution {
public:
    bool isvowel(char ch)
        {
            return ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'|| ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U';
        }
    string reverseVowels(string s) {
        int start=0,end=s.size()-1;
        while(start<end)
        {
            if(isvowel(s[start]) && isvowel(s[end]))
            {
                swap(s[start],s[end]);
                start++;
                end--;
            }
            else if(isvowel(s[start]))
                end--;
            else if(isvowel(s[end]))
                start++;
            else{
                start++;
                end--;
            }
        }
        return s;
    }
};