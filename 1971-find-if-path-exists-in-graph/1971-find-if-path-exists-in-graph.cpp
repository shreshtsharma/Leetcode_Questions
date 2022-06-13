class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        //using bfs traversal;
        if(source==destination)
            return true;
        vector<vector<int>>adj(n);
        for(int i=0;i<edges.size();i++)
        {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        queue<int> q;
        vector<int> vis(n,0);
        q.push(source);
        vis[source]=1;
        while(!q.empty())
        {
            int cur=q.front();
            q.pop();
        
            for(auto it:adj[cur])
            {
                if(vis[it]!=1)
                {

                    if(it==destination)
                        return true;
                    vis[it]=1;
                    q.push(it);
                }
            }
            
        }
        return false;
    }
};