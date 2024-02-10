//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void Radhe(){
 ll t;
 cin>>t;
 while(t--){

                int n;
                cin>>n;
                vector<int>v1(n);
                for(int i=0;i<n;i++)cin>>v1[i];
                sort(v1.begin(),v1.end(),greater<int>());
                for(auto x:v1)cout<<x<<" ";
                cout<<endl;

}
 }

int main(){
Radhe();
return 0;
}