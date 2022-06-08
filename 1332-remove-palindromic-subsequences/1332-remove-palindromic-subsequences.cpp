class Solution {
public:
    int removePalindromeSub(string s) {
        if(s.size()==0)
            return 0;
        if(isPalindrome(s))
            return 1;
        else 
            return 2;
    }
    bool isPalindrome(string s){
        int i=0; 
        int j=s.size()-1;
        while(i<j){
            if(s[i]!=s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
};