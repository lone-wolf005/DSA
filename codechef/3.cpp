//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void Radhe(){
 ll t;
 cin>>t;
 while(t--){
     int n,k;
     cin>>n>>k;
     deque<int>q;
       for(int i=k+1;i<=n;i++){
           if(i&1)q.push_front(i);
           else q.push_back(i);
     }
     for(int i=1;i<=k;i++){
        q.push_back(i);
     }
     while (!q.empty())
     {
        cout<<q.front()<<" ";
        q.pop_front();
     }
     cout<<endl;
     
   
 }
}
int main(){
Radhe();
return 0;
}