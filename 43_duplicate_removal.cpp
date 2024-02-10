//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
    string removeDuplicateLetters(string s) {
        int arr[26]={0};
        for(int i = 0;i<s.length();i++){
              arr[s[i]-'a']++;
        }
        for(int i =0;i<26;i++)cout<<arr[i]<<" ";
        string ans ="";
        for(int i = 0;i<26;i++){
            if(arr[i]>0)ans+=(i+'a');
        }
        cout<<ans<<endl;
        return ans;
    }
int main(){
    removeDuplicateLetters("aabbcc");

return 0;
}