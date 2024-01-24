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
    
    int c = 0;
    
    bool pal(unordered_map<int,int> &mp){
        
        int k=0;
        for(auto i:mp) if(i.second%2!=0 and i.second!=0) k++;
        return k<=1;
        
    }
    
    
    void f(TreeNode *root, unordered_map<int,int> &mp){
        
        if(!root) return;
        
        
        mp[root->val]++;
        if(!root->left and !root->right) if(pal(mp)) c++;
        f(root->left, mp);
        f(root->right, mp);
        mp[root->val]--;
    }
    
    int pseudoPalindromicPaths (TreeNode* root) {
        
        unordered_map<int, int> mp;
        f(root, mp);
        return c;
    }
};