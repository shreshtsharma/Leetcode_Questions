class Solution {
public:
    //
    bool isBipartite(vector<vector<int>>& graph) {
        int v=graph.size();
        queue<int> q;
        vector<int> vis(v,-1);
        for(int i=0;i<v;i++)
        {
            if(vis[i]==-1)
            {
                q.push(i);
                vis[i]=0;
                while(!q.empty())
                {
                    int cur=q.front();
                    q.pop();
                    for(auto it: graph[cur])
                    {
                        if(vis[it]==-1)
                        {
                            q.push(it);
                            if(vis[cur]==0)
                                vis[it]=1;
                            else
                                vis[it]=0;
                        }
                        else if(vis[it]==vis[cur])
                        {
                            return false;
                        }
                    }
                }
            }
        }
        return true;
    }
};