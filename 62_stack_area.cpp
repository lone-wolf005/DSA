class Solution {
private:
vector<int>previous(vector<int>heights,int n){

    vector<int>prev(n);
    stack<int>st;
    st.push(-1);
    for(int i = 0;i <n;i++){
           while(st.top()!=-1 && heights[st.top()]>=heights[i]){
               st.pop();
           }
           prev[i]=st.top();
           st.push(i);
    }
    return prev;
}
vector<int>next(vector<int>heights,int n){
    vector<int>next(n);

    //  vector<stack>st;
    stack<int>st;
     st.push(-1);
    for(int i = n-1;i>=0;i--){
           while(st.top()!=-1 && heights[st.top()]>=heights[i]){
               st.pop();
           }
           next[i]=st.top();
           st.push(i);
    }
    return next;
}
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int>prev=previous(heights,n);
        vector<int>nexi=next(heights,n);  
       int area = INT_MIN;
       for(int i =0;i<n;i++){
           int h = heights[i];
           if(nexi[i]== -1)nexi[i]=n;
           int b = nexi[i]-prev[i]-1;
           int newarea = h*b;
           area = max(area,newarea);
       }
        return area;
        
    }
};N