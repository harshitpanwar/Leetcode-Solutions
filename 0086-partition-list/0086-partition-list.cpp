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
    ListNode* partition(ListNode* head, int x) {
        
        ListNode* a = new ListNode();
        ListNode* b = new ListNode();
        
        ListNode* head_a = a;
        ListNode* head_b = b;
        

         while(head!=NULL){
             
             if(head->val<x){
                 
                 a->next = new ListNode(head->val);
                 a = a->next;
                 
             }
             
             if(head->val>=x){
                 
                 b->next = new ListNode(head->val);
                 b = b->next;
                 
             }
             
             head = head->next;
             
         }   
        
        a->next = head_b->next;
        
        
        return head_a->next;
        
    }
};