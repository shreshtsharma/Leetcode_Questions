class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=0;
        int sum=0;
        int i=digits.size()-1;
        while(i>=0)
        {
            if(i==digits.size()-1)
            {
                sum=digits[i]+1;
                digits[i]=(digits[i]+1)%10;
                carry=sum/10;
            }
            else if(carry!=0)
            {
                sum=digits[i]+carry;
                digits[i]=(digits[i]+carry)%10;
                carry=sum/10;
            }
            i--;
        }
        if(carry!=0)
        {
            digits.insert(digits.begin(),carry);
        }
        return digits;
    }
};