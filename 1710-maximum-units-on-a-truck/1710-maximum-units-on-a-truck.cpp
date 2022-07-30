bool comp(vector<int> v1,vector<int> v2)
    {
        return v1[1]>v2[1];
    }

class Solution {
public:
    
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        
        sort(boxTypes.begin(),boxTypes.end(),comp);
        int i=0;
        int res=0;
        while(truckSize!=0 && i<boxTypes.size())
        {
            if(boxTypes[i][0]<=truckSize)
            {
                res+=boxTypes[i][0]*boxTypes[i][1];
                truckSize-=boxTypes[i][0];
            }
            else
            {
                res+=truckSize*boxTypes[i][1];
                truckSize=0;
            }
            i++;
        }
        return res;
        
    }
};