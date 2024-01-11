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
    
    int max_diff = INT_MIN;
    
    void f(TreeNode *root, int mini, int maxi){
        
        if(!root) return;
        
        if(!root->left and !root->right){
        
            mini = min(mini, root->val);
            maxi = max(maxi, root->val);
            max_diff = max(max_diff, abs(mini-maxi));
            return;
        }
        
        mini = min(mini, root->val);
        maxi = max(maxi, root->val);

        f(root->left, mini, maxi);
        f(root->right, mini, maxi);
        
        
    }
    
    int maxAncestorDiff(TreeNode* root) {
        int mini = INT_MAX, maxi=INT_MIN;
        f(root, mini, maxi);
        return max_diff;
    }
};