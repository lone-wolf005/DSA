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
int first_occurance(vector<int>v1,int s,int e,int target,int ans){
    // print(v1,s,e);
    if(s>e){
        return ans;
    }
    int mid = s+(e-s)/2;
    if (v1[mid] == target) {
        ans = mid;
    // cout<<ans<<endl;
       return first_occurance( v1, s, mid-1, target,ans);
    } else if (v1[mid] < target) {
       return first_occurance( v1,  mid+1, e, target,ans);
    }
    else {
       return first_occurance( v1,s,mid-1 ,target,ans);
    }
}
int last_occurance(vector<int>v1,int s,int e,int target,int ans){
    // print(v1,s,e);
    if(s>e){
        return ans;
    }
    int mid = s+(e-s)/2;
    if (v1[mid] == target) {
        ans = mid;
    // cout<<ans<<endl;
       return last_occurance( v1, mid+1, e, target,ans);
    } else if (v1[mid] < target) {
       return last_occurance( v1,  mid+1, e, target,ans);
    }
    else {
       return last_occurance( v1,s,mid-1 ,target,ans);
    }
}
int main(){
    vector<int>v1={1,2,2,3,5};
    cout<<first_occurance(v1,0,4,2,-1);
    cout<<last_occurance(v1,0,4,2,-1);

return 0;
}



