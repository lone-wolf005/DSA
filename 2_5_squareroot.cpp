#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int IntegerSquare(int num){
    int start=1;
    int end = num;
    int ans = 0;
    long long mid = start + (end - start ) / 2;
    while (start <= end)
    {
        long long tmp= mid * mid;
        if(tmp == num) return mid;
        else if(tmp > num) end = mid - 1;
        else {
            ans = mid;
            start = mid + 1;
        }
    
    mid = start + (end -start) / 2;
    }
 
    
return ans;
}
   double ExactSquare(int n,int precision,int tempsoln){
        double ans =tempsoln;
        double tmp = 1;

        for(int i = 1; i <= precision ;i++){
               tmp = tmp/10;
            for(double j = ans; j*j <= n; j+=tmp ){
                ans=j;
            }
        }
        return ans;
    }
int main(){
 int tempsoln=IntegerSquare(37);
cout<<ExactSquare(37,4,tempsoln)<<endl;


return 0;
}