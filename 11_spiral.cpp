//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<int>spiral_print(vector<vector<int>>v1,int n,int m){
    int total = n * m;
    int count = 0;
    int sR = 0;
    int eR = n - 1;
    int sC = 0;
    int eC = m - 1;
    vector<int>ans;
    while(count < total){
        for(int i = sR ; i <=eC && count < total; i++){
            ans.push_back(v1[sR][i]);
            count++;
        }
        sR++;
        for(int i = sR ; i <=eR && count < total; i++){
            ans.push_back(v1[i][eC]);
            count++;

        }
        eC--;
        for(int i = eC ; i >=sC && count < total; i--){
            ans.push_back(v1[eR][i]);
            count++;

        }
        eR--;
        for(int i = eR ; i >=sR && count < total; i--){
            ans.push_back(v1[i][sC]);
            count++;
        }
        sC++;
    }
    return ans;
}
int main(){
    vector<vector<int>>v1={{1,2,3},{4,5,6},{7,8,9}};
    vector<int>ans=spiral_print(v1,3,3);
    for(auto x:ans){
        cout<<x<<" ";
    }

return 0;
}
