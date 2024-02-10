//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool dfs(int i,unordered_map<int,bool>&visited,unordered_map<int,bool>&dfsvisited,vector<int>adj[]){
        
        dfsvisited[i]=true;
        visited[i]=true;
        for(auto x:adj[i]){
            if(!visited[x]){
               bool y = dfs(x,visited,dfsvisited,adj);
               if(y)return true;
            }
            else if(dfsvisited[x])return true;
        }
        dfsvisited[i]=false;
        return false;
    }
    
    bool isCyclic(int V, vector<int> adj[]) {
        // unordered_map<int,bool>visited;
        // unordered_map<int,bool>dfsvisited;
        // // return dfs(0,visited,dfsvisited,adj);
        // for(int i=0;i<V;i++){
        //     if(!visited[i]){
        //       bool w = dfs(i,visited,dfsvisited,adj);
        //       if(w)return 1;}
        // }
        
        //  USING BFS ALGORITHMS
        vector<int>indegree(V);
        for(int i=0;i<V;i++){
            for(auto x:adj[i]){
                indegree[x]++;
            }
        }
        queue<int>q;
        for(int i=0;i<V;i++){
            if(!indegree[i])q.push(i);
        }
        int cnt = 0;
        while(!q.empty()){
            int f = q.front();
            q.pop();
            cnt++;
            for(auto x:adj[f]){
                indegree[x]--;
                if(!indegree[x])q.push(x);
            }
        }
        if(cnt == V)return false;
        return true;
        
        
        // return false;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends