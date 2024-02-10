#include <bits/stdc++.h>
class Node{
    public:
    int data;
    int i;
    int j;
     Node(int data,int i,int j){
        this->data =data;
        this->i =i;
        this->j =j;
    }
} ;
class compare{
    public:
      bool operator()(Node*a,Node*b){
          return a->data > b->data;
      }
};
vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
{
    priority_queue<Node*,vector<Node*>,compare>q;

    for(int i = 0;i<k;i++){
        Node*tmp = new Node(kArrays[i][0],i,0);
        q.push(tmp);
    }
    vector<int>ans;
    while(!q.empty()){
         Node*tmp = q.top();
         q.pop();
         ans.push_back(tmp->data);
         int i = tmp->i;
         int j = tmp->j;
         if(j+1<kArrays[i].size()){
              Node*next = new Node(kArrays[i][j+1],i,j+1);
              q.push(next);
         }
    }
    return ans;
}
