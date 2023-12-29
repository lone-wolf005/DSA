//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  long long maximumSumOfHeights(vector<int>& maxHeights) {
     
      
int n = maxHeights.size();
 int sum1 = -1;
    
  for(int i =0;i<n;i++){
    // cout<<"element"<<maxHeights[i]<<endl;
      int sum = maxHeights[i];
    //   cout<<sum<<endl;
      
        int j = i - 1 ;
        int peak = maxHeights[i];
        while(j>=0){
           if(peak<maxHeights[j]){
              sum+=(maxHeights[j]-(maxHeights[j]-peak));
              peak = (maxHeights[j]-(maxHeights[j]-peak));
           }
            else{
                sum+=maxHeights[j];
                peak = maxHeights[j];}
               j--;
}
        // cout<<sum<<endl;
            // cout<<"aa"<<endl;
         peak = maxHeights[i];
         j = i + 1;
         while(j<n){
           if(peak<maxHeights[j]){
              sum+=(maxHeights[j]-(maxHeights[j]-peak));
              peak = (maxHeights[j]-(maxHeights[j]-peak));
           }
            else{
                sum+=maxHeights[j];
                peak = maxHeights[j];}
               j++;
}
// cout<<sum<<endl;
    sum1 = max(sum1,sum);  
     
  } 
        return sum1;
    }
int main(){
    vector<int>v1={6,5,3,9,2,7};
   int x= maximumSumOfHeights(v1);

return 0;
}