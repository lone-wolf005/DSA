#include <bits/stdc++.h> 
int findMinimumCost(string str) {
  if(str.length()&1)return -1;
  stack<char>st;
  for(auto x:str){
    if (x == '{')
      st.push(x);
    else if (!st.empty() && st.top() == '{')st.pop();
    else{
      st.push(x);
    }
  }
  // if(st.empty())return 0;
 
    int a =0;
    int b = 0;
    while(!st.empty()){
      char x = st.top();
      if(x=='{')a++;
      else b++;
      st.pop();
    }
    int ans = ((a + 1)/2 + (b+1)/2);
    return ans;
  

}