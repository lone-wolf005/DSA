//Radhe Radhe
#include<bits/stdc++.h>
bool valid(char a){
    if((a >= 'a' && a <= 'z')||(a >= 'A' && a <= 'Z')||(a >= '0' && a <= '9')){
        return 1;
    }
    return 0;
}
char lower(char a){
        if(a >= 'A' && a <= 'Z'){
        return (a -'A'+'a');
    }
    return a;
}
bool palindrome(string s,int n){
    int i = 0;
    int j = n - 1;
    while(i <= j){
        if(s[i++]!=s[j--]){
            return 0;
        }
    }
    return 1;
}


using namespace std;
#define ll long long int
int main(){
    

return 0;
}