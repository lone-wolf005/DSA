/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class compare{
    public:
    bool operator()(ListNode*a,ListNode*b){
        return a->val > b->val;
    }
};
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int k = lists.size();
        if(!k)return NULL;
        ListNode*head = NULL;
        ListNode*tail = NULL;
        priority_queue<ListNode*,vector<ListNode*>,compare>q;
        for(int i = 0;i<k;i++){
          if(lists[i])q.push(lists[i]);
        }

        while(!q.empty()){
            ListNode*temp = q.top();
            q.pop();
            if(!head){
                head = temp;
                tail = temp;
                if(tail->next)q.push(tail->next);
                continue;
            }
            tail ->next = temp;
            tail = temp;
             if(tail->next)q.push(tail->next);    
        }
        return head;
    }
};