//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int sum(int &a,int &c){
    c=a;
}
int main(){
    int a =6;
    int &n=a;
    //pass by refrence create new refrence to old varible it use to pass varible in functon
    int c;
    sum(a,c);
    //we passed the refrence of two variable so actual change occured in varible
    cout<<c<<endl;
    cout<<n<<endl;
return 0;
}