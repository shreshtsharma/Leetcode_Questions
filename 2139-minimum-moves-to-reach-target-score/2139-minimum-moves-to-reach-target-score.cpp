class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        int count=0;
        while(target!=1)
        {
            
            if(maxDoubles==0)
            {
                return count+target-1;
            }
            count++;
            if(target%2==0 && maxDoubles!=0)
            {
                target/=2;
                maxDoubles--;
            }
            else if(target%2!=0)
            {
                target-=1;
            }
            
        }
        return count;
    }
};