class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> vec1(27,0);
        vector<int> vec2(27,0);
        for(int i=0;i<ransomNote.size();i++)
        {
            vec1[ransomNote[i]-'a']++;
        }
         for(int i=0;i<magazine.size();i++)
        {
            vec2[magazine[i]-'a']++;
        }
        for(int i=0;i<ransomNote.size();i++)
        {
            if(vec1[ransomNote[i]-'a']>vec2[ransomNote[i]-'a'])
                return false;
        }
        return true;
        
    }
};