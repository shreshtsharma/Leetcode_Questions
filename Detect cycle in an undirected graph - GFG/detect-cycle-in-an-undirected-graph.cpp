// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
 bool CheckForCycle(int V,vector<int> & vis,vector<int> adj[],int start)
{
    queue<pair<int,int>> q;
    vis[start]=1;
    q.push({start,-1});
    while(!q.empty())
    {
        int cur=q.front().first;
        int parent=q.front().second;
        q.pop();
        for(auto it: adj [cur])
        {
            if(vis[it]!=1)
            {
                vis[it]=1;
                q.push({it,cur});
            }
            else if(it!=parent)
            return true;
        }
    }
    return false;
}
public:
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        vector<int> vis(V,0);
        bool res=false;
        for(int i=0;i<V;i++)
        {
            if(vis[i]!=1)
            {
                res=CheckForCycle(V,vis,adj,i);
                if(res==true)
                return true;
            }
        }
        return res;
    }
    

};



// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}  // } Driver Code Ends