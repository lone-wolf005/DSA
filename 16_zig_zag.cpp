//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
string zigzag(string s,int x){
    int row = 1;
    int cnt = 0;
    int n = s.size();
    int row_index = 0;
    string ans = "";
    int tmp = 0;
    while(ans.size()!=n){
        if(row == x || row == 1){
            while(tmp < n){
                ans.push_back(s[tmp]);
                 
                cnt++;
                if(cnt == n){
                    return ans;
                }
                tmp += 2*(x-1);
            }
        row++;
        row_index +=1;
        tmp=row_index;
        }

        else{
            int ele = 1;
            while(tmp < n){
                ans.push_back(s[tmp]);
                ele++;
                cnt++;
                if(cnt == n){
                    return ans;
                }
                if(ele%2==0){
                tmp += 2*(x-row);}
                else{
                    tmp+= 2*(row - 1);
                }
            }
        row++;
        row_index= row_index + 1;
        tmp = row_index;
        }

    }
    return ans;
}
int main(){
        string s = zigzag("PAYPALISHIRING",4);
        cout<<s<<endl;
return 0;
}