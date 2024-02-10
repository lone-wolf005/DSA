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
public:
    ListNode * insertAtTail(ListNode* &ansHead,ListNode* &ansTail,int digit){
        ListNode* temp = new ListNode(digit);
         if(ansHead ==NULL){
             ansHead = temp;
             ansTail = temp;
             return ansHead;
         }
         ansTail->next = temp;
         ansTail = temp;
         return ansHead;
    }
    ListNode* add(ListNode*l1,ListNode*l2){
        int carry = 0;
        ListNode* ansHead = NULL;
        ListNode* ansTail = NULL;

        while(l1 != NULL || l2 != NULL || carry !=0){
              int value1 = 0,value2 = 0;
              if(l1 != NULL) value1 = l1->val;
              if(l2 != NULL) value2 = l2->val;
              
              int sum = value1 + value2 + carry;
              
              int digit = sum%10;
              insertAtTail(ansHead,ansTail,digit);
              carry = sum / 10;
              if(l1!=NULL)
              l1 = l1->next;
              if(l2!=NULL)
              l2 = l2->next;  
        }
        return ansHead;

    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*head = add(l1,l2);
        return head;   
    }
};