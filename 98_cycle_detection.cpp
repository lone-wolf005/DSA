
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    
    bool bfs(int i,unordered_map<int,bool>&visited,vector<int>adj[]){
        unordered_map<int,int>parent;
        visited[i]=true;
        parent[i]=-1;
        queue<int>q;
        q.push(i);
        while(!q.empty()){
            int fr = q.front();
            q.pop();
            for(auto x:adj[fr]){
               if(visited[x] && x != parent[fr])return true;
               else if(!visited[x]){
                   visited[x]=1;
                   parent[x]=fr;
                   q.push(x);
               }
            }
        }
        // cout<<"NO"<<endl;
        return false;
        
        
    }
    bool dfs(int i,int parent,unordered_map<int,bool>&visited, vector<int> adj[]){
        visited[i]=true;
        
        for(auto x:adj[i]){
            if(!visited[x]){
                visited[x]=1;
                bool y = dfs(x,i,visited,adj);
                if(y)return true;
            }
            else if(visited[x] && x!=parent){
                return true;
            }
        }
        return false;
        
        
        
    }
    bool isCycle(int V, vector<int> adj[]) {
        
        unordered_map<int,bool>visited;
        for(int i=0;i<V;i++){
            if(!visited[i]){
            //   bool x =   bfs(i,visited,adj);
              bool x =   dfs(i,-1,visited,adj);
              if(x)return 1;
            }
        }
        return 0;
    }
};

//{ Driver Code Starts.
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
}
// } Driver Code Ends