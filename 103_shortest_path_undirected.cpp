#include<unordered_map>
#include<queue>
#include<vector>
// using namespace std;
void bfs(int s,unordered_map<int,bool>&visited,unordered_map<int,int>&parent,unordered_map<int,vector<int>>adj){
	parent[s]=-1;
	queue<int>q;
	q.push(s);
	visited[s]=1;

	while(!q.empty()){
		int f = q.front();
		q.pop();
		for(auto x:adj[f]){
			if(!visited[x]){
				visited[x]=1;
				parent[x]=f;
				q.push(x);
			}
		}
	}
}
vector<int> shortestPath( vector<pair<int,int>> edges , int n , int m, int s , int t){
	
	// Write your code here
     unordered_map<int,vector<int>>adj;
	 for(int i=0;i<edges.size();i++){
		 int u = edges[i].first;
		 int v = edges[i].second;
		 adj[u].push_back(v);
		 adj[v].push_back(u);
	 }
	 unordered_map<int,int>parent;
	 unordered_map<int,bool>visited;

	 bfs(s,visited,parent,adj);
     int x = t;
	 vector<int>ans;
	 while(parent[x]!=-1){
		 ans.push_back(x);
		 x=parent[x];
	 }
	 ans.push_back(s);
     reverse(ans.begin(),ans.end());
	 return ans;
	
}
