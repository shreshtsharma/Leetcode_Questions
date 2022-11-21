class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int sum=0;
        int maxi=0;

        for(int i=0;i<k;i++)
        {
            sum+=cardPoints[i];
        }
        maxi=sum;
        sum=0;
        int i=cardPoints.size()-k;
        int j=i;
        while(j<cardPoints.size())
        {
            sum+=cardPoints[j];
            j++;
        }
        maxi=max(sum,maxi);
        j=0;
        while(i<cardPoints.size())
        {
            sum-=cardPoints[i];
            i++;
            sum+=cardPoints[j];
            j++;
            maxi=max(maxi,sum);
        }
        return maxi;
    }
};