// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
	bool isBipartite(int V, vector<int>adj[]){
	    // Code here
	    vector<int> vis (V,-1);
	    bool res;
	    for(int i=0;i<V;i++)
	    {
	        if(vis[i]==-1){
	            vis[i]=0;
	        res=Check_Bipartite(i,adj,vis);
            if(res==false)
            return res;
	        }
	    }
	    return true;
	}
    bool Check_Bipartite(int i,vector<int> adj[] ,vector<int> & vis)
    {

        for(auto it : adj[i])
        {
            if(vis[it]==-1)
            {
                if(vis[i]==0)
                vis[it]=1;
                else
                vis[it]=0;
                if(Check_Bipartite(it,adj,vis)==false)
                return false;
            }
            else if(vis[i]==vis[it])
            return false;
        }
        return true;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}  // } Driver Code Ends