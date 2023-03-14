/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    int sum = 0;
    
    void dfs(TreeNode* root, string s){
        
        if(!root) return;
        
        if(root->left==NULL and root->right==NULL){
            sum += stoi(s+to_string(root->val));
            return;
        }
        
        string st = s + to_string(root->val);
        dfs(root->left, st);
        dfs(root->right, st);
        
    }
    
    int sumNumbers(TreeNode* root) {
        
        dfs(root, "");
        return sum;
        
    }
};