class Solution {
public:
    bool dfs(vector<vector<int>>&adj, vector<int>&vis, int source, int destination){
        bool ans = false;
        vis[source] = 1;
        if(source == destination)
            return true;
        
        for(auto v : adj[source]){
            if(!vis[v]){
                if(dfs(adj, vis, v, destination))
                    return true;
            }
        }
        return ans;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>>adj(n);
        for(int i=0;i<edges.size();i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        vector<int>vis(n, 0);
        return dfs(adj, vis, source, destination);
    }
};