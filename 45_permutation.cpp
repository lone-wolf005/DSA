//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void permutation(string s,int index,vector<string>&ans){
    if(index>s.length()){
        ans.push_back(s);
    }
    for(int i = index;i<s.length();i++){
        swap(s[i],s[index]);
        permutation(s,index+1,ans);
        swap(s[i],s[index]);
    }

}
int main(){

return 0;
}