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
    int len = 0;
    unordered_map<int, int> mp;
    Solution(ListNode* head) {
        
        ListNode* temp = head;
        while(temp!=NULL){
            len++;
            mp[len] = temp->val;
            temp=temp->next;
        }
        
    }

    int getRandom() {
        return mp[1 + (rand() % len)];

    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */