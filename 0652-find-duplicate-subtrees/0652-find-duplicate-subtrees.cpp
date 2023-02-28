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
    
    vector<TreeNode*> ans;
    unordered_map<string, int> mp;
    
    string dfs(TreeNode *root){
        
        if(!root) return "#";
        
        string left = dfs(root->left);
        string right = dfs(root->right);
        
        
        //doing this post order traversal is necessary because it makes sure that 
        // every time a unique string is created
        string temp = to_string(root->val) + "#" + left + "#" + right;
        
        if(mp[temp]==1){
            ans.push_back(root);
        }
        
        mp[temp]++;
        
        return temp;
        
    }
    
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        
        if(!root) return ans;
        dfs(root);
        return ans;
        
    }
};