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
class Solution {

   ListNode* solve2(ListNode* & head){
       if(head==NULL || head->next==NULL){
           return head;
       }
       ListNode*chotaHead = solve2(head->next);
       head->next->next = head;
       head->next = NULL;
       return chotaHead;

   }
    // void solve(ListNode* & head, ListNode*& pre,ListNode*curr){
    //     if(curr==NULL){
    //         head = pre;
    //         return ;
    //     }
    //     ListNode*forward = curr->next;
    //     solve(head,curr,forward);
    //     curr->next = pre;
    // }
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL)return head;
        if(head->next==NULL)return head;
        return solve2(head);
    //     ListNode*forward;
    //     while(curr !=NULL){
    //         forward = curr->next;
    //         curr->next = pre;
    //         pre=curr;
    //         curr=forward;
    //     }
    //     return pre;
        
    }
};