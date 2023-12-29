//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
void rotate(vector<vector<int>>v1){
    int n = matrix.size();
    // cout<<n<<endl;
    // int m = v1[0].size() - 1;
    int count = 0;
    int sR = 0;
    int eR = n - 1;
    int sC = 0;
    int eC = n - 1;
    int exit = n - 2;
    int c = 0;
    
    while(exit){
        for(int i = sR,j = c ; i < eR ; i++,j++){
            swap(matrix[i][eC],matrix[sR][j]);
            // c++;
    
        }
    // cout<<c<<endl;

        for(int i = eC,j = c ; i > sC; i--,j++){
            swap(matrix[eR][i],matrix[sR][j]);
        }
        for(int i = eR,j = c ; i >sR; i--,j++){
            swap(matrix[i][sC],matrix[sR][j]);
        }
        exit --;
        sR++;
        eC--;
        eR--;
        sC++;
        c++;
    //   if(exit==1){
    // for(auto x:v1){
    //     for(auto y:x){
    //         cout<<y<<" ";
    //     }
    //     cout<<endl;
    // }
    }
   
}


#define ll long long int
int main(){
    // vecoo [[1,2,3],[4,5,6],[7,8,9]]
    vector<vector<int>>v1 = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    rotate(v1);


return 0;
}