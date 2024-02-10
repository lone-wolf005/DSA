#include<bits/stdc++.h>
int getKthLargest(vector<int> &arr, int k)
{   
	priority_queue<int,vector<int>,greater<int>>q;
	for(int i =0;i<arr.size();i++){
		int sum = 0;
		for(int j = i;j<arr.size();j++){
              sum+=arr[j];
			  if(q.size()<k){
				  q.push(sum);
			  }
			  else if(sum>q.top()){
				  q.pop();
				  q.push(sum);
			  }
		}
	}
	return q.top();
	
}