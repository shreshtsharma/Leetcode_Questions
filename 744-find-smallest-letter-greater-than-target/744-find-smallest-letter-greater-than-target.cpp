class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char temp=' ';
        int low=0;
        int high=letters.size()-1;
        int mid;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            if(int(letters[mid])>int(target))
            {
                temp=letters[mid];
                high=mid-1;
            }
            else if(int(letters[mid])<=int(target))
            {
                low=mid+1;
            }
    
        }
        if(temp==' ')
        {
            return letters[0];
        }
        else
        return temp;
    }
};