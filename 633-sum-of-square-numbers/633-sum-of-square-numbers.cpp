class Solution {
public:
    bool judgeSquareSum(int c) {
       long long  a = sqrt(c);
    long long   i  =0;
        long long  j =a;
        while(i<=j){
            if(i*i + j*j ==c){
                return true ;
            }
            else if ( i*i +j*j<c){
                i++;
            }
            else{
                j--;
            }
        }
        return false;
    }
};