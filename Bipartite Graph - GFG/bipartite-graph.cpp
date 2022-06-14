// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
	bool isBipartite(int V, vector<int>adj[]){
	    // Code here
	    vector<int> vis(V,-1);
	    queue<int> q;
        for(int i=0;i<V;i++)
        {
            if(vis[i]==-1)
            {
                q.push(i);
                vis[i]=0;
                while(!q.empty())
                {
                    int cur=q.front();
                    q.pop();
                    for(auto it: adj[cur])
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
                        return false;
                    }
                }
            }
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