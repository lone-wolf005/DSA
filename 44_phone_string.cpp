//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void generate(string s,int index,string output,vector<string>ans,string mapping[]){
    if(index>=s.length()){
        ans.push_back(output);
        return;
    }
    int num = s[index]-'0';
    string value = mapping[num];
    for(int i =0;i<value.length();i++){
        output.push_back(value[i]);
        generate(s,index+1,output,ans,mapping);
        output.pop_back();
    }
}
int main(){

return 0;
}