class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int i=0;
        int j=1;
        int diff;
        while(stones.size()>1)
        { 
            sort(stones.begin(),stones.end(),greater<int>());
          
            if((stones[i]-stones[j])>0)
            {
                diff=abs(stones[i]-stones[j]);
               stones.erase(stones.begin()+i,stones.begin()+2);
                stones.push_back(diff);
            }
            else if(stones[i]-stones[j]==0)
            {
                stones.erase(stones.begin()+i,stones.begin()+2);
            }
            cout<<stones.size();
        }
        if(stones.empty())
        {return 0;
            }
        else
        return stones[i];
    
    }
};