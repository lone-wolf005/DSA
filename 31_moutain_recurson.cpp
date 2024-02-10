//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void print(vector<int>v1,int s,int e){
    for(int i =s;i<=e;i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
}
int peak(vector<int>v1,int s,int e){
    print(v1,s,e);
    if(s>=e)return s;
    int mid = s + (e-s)/2;
    if(v1[mid+1]>v1[mid]){
        return peak(v1,mid+1,e);
    }
    else {
        return peak(v1,s,mid);
    }
}
int main(){
    vector<int>v1={0,10,5,2};
    peak(v1,0,3);

return 0;
}