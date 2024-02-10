//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
template <typename T>
class Graph{
     public:
     unordered_map<T,vector<T>>g;
     int**adsmat;
     void insert(T x,T y, bool isdirection){
           g[x].push_back(y);
           if(!isdirection){
           g[y].push_back(x);}
     }
     void matinti(int node){
        // vector<vector<T>>adsmat(node,vector<T>(node,0));
        adsmat = new int*[node];
        for(int i=0;i<node;i++){
            adsmat[i]=new int[node];
        }
        for(int i=0;i<node;i++){
            for(int j=0;j<node;j++){
                adsmat[i][j]=0;
            }
        }
     }
     void insertMat(int x,int y){
        adsmat[x][y]=1;
        adsmat[y][x]=1;
     }
     void print(){
        for(auto x:g){
            cout<<x.first<<"->";
            for(auto y:x.second){
                 cout<<y<<" ";
            }
            cout<<endl;
        }
     }
     void printmat(){
         for(int i=0;i<6;i++){
            for(int j=0;j<6;j++){
                cout<<adsmat[i][j]<<" ";
            }
            cout<<endl;
        }
     }
};
int main(){
    Graph<int>g;
    g.matinti(6);
    g.insertMat(1,2);
    g.insertMat(1,3);
    g.insertMat(1,5);
    g.insertMat(3,5);
    g.insertMat(4,5);
    g.printmat();
     

return 0;
}