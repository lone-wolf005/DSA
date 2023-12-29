//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
class Arithmatic{
    public:
    int sum(int a){
        return a+b+c;
    }
    int sum(int a,int b){
        return a+b;
    }
    int sum(int a,int b,int c){
        return a+b+c;
    }

};
int main(){
    Arithmatic x;
    
    cout<<x.sum(2)<<endl;
    cout<<x.sum(2,3)<<endl;
    cout<<x.sum(1,2,3)<<endl;

return 0;
}