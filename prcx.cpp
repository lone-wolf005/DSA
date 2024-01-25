#include <iostream>
#include<queue>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    queue<int>q;
	   for(int i=0;i<n;i++){
	       int tm;
	       cin>>tm;
	       q.push(tm);
	   }
	   bool x = true;
	   while(q.size()!= 1){
	       if(x){
	           int y = q.front();
	           q.pop();
	           q.push(y);
	           q.pop();
	           x=false;
	       }
	       else{
	           int y = q.front();
	           q.pop();
	           q.push(y);
	           y=q.front();
	           q.push(y);
	           q.pop();
	           x=true;
	       }
	   }
	   if(x)cout<<0<<" "<<q.front()<<endl;
	   else cout<<1<<" "<<q.front()<<endl;
	}
	return 0;
}
