//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    map<int,string>m;
    m.insert(make_pair(111,"jigar"));
    m.insert(make_pair(101,"Himanshu"));
    m.insert(make_pair(110,"Yagnik"));
    //YOU can erase element by key value
    m.erase(111);
    

    for(auto x: m){
        cout<<x.first<<" "<<x.second<<endl;
    }
    
return 0;
}