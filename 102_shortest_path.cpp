//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
class graph{
    public:
    
    unordered_map<int,vector<pair<int,int>>>m1;
    
    void add(int u,int v,int w){
        m1[u].push_back({v,w});
    }
    void print(){
        for(auto x:m1){
            cout<<x.first<<" "<<endl;
            for(auto y:x.second){
                cout<<y.first<<" "<<y.second<<endl;
            }
        }
    }
    void dfs(int i,unordered_map<int,bool>&visited,stack<int>&st){
       visited[i]=1;

       for(auto x:m1[i]){
            if(!visited[x.first]){
                dfs(x.first,visited,st);
            }
       }
       st.push(i);
    }   
    void shortest_dist(int src,vector<int>&min_dist,stack<int>&st){
        min_dist[src]=0;
        while (!st.empty())
        {
            /* code */
            int t = st.top();
            st.pop();
            if(min_dist[t]!=INT_MAX){
                for(auto x:m1[t]){
                    if(x.second + min_dist[t] < min_dist[x.first]){
                        min_dist[x.first]=x.second+min_dist[t];
                    }
                }
            }
        }
        
    }

};
int main(){
    graph g;

    g.add(0,1,5);
    g.add(0,2,3);
    g.add(1,2,2);
    g.add(1,3,6);
    g.add(2,3,7);
    g.add(2,4,4);
    g.add(2,5,2);
    g.add(3,4,-1);
    g.add(4,5,-2);
    g.print();
    int n = 6;
    stack<int>st;
    unordered_map<int,bool>visited;
    for(int i=0;i<n;i++){
        if(!visited[i]){
            g.dfs(i,visited,st);
        }
    }
    vector<int>min_dist(n);
    for(auto &x:min_dist)x=INT_MAX;
    g.shortest_dist(1,min_dist,st);

    for(auto x:min_dist)cout<<x<<" ";
    
return 0;
}