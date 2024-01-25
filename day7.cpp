//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 char findTheDifference(string s, string t) {
        int arr1[26]={0};
        int arr2[26]={0};
        for(int i =0;i<s.length();i++){
             arr1[s[i]-'a']++;
        }
        for(int i =0;i<t.length();i++){
             arr2[t[i]-'a']++;
        }
        for(int i =0;i<26;i++)cout<<arr1[i]<<" ";
        for(int i =0;i<26;i++)cout<<arr2[i]<<" ";
        
        char ans;
        for(int i =0;i<26;i++){
             if(arr1[i]<arr2[i]){
                 ans = 'a' + i; 
                 break;
             }
        }
        return ans;
        
    }
int main(){
   char x =  findTheDifference("abcd","abcde");

return 0;
}