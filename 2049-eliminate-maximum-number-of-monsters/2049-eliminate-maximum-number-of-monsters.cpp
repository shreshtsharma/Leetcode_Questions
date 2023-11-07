class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        for(int i=0;i<dist.size();i++)
        {
            dist[i]=ceil((double)dist[i]/(double)speed[i]);
            cout<<dist[i]<<" ";
        }
        sort(dist.begin(),dist.end());
        int time=1;
        for(int i=1;i<dist.size();i++)
        {
            if(dist[i]<=time)
            return time;
            else
            time++;
        }
        return dist.size();
    }
};