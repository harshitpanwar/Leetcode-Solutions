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
    
    int h(TreeNode *root){
        
        if(!root) return 0;
        
        int l = h(root->left);
        int r = h(root->right);
        
        return max(l, r) + 1;
        
    }
    
    bool isEverythingLeft(vector<int> &ll){
        
        int flag = 1;
        int ans = true;
        
        for(int i:ll){
            
            // cout<<i<<" ";
            if(i<0) flag = 0;
            
            if(flag==0 and i>0) ans = false;
            
        }
        // cout<<endl;

        return ans;
        
    }
    
    
    bool isCompleteTree(TreeNode* root) {
        
        queue<TreeNode*> q;
        
        q.push(root);
        
        int level = 0;
        
        vector<vector<int>> levels;
        vector<int> ll;
        int height = h(root)-1;
        // cout<<height<<endl;
        
        while(!q.empty()){
            
            int size = q.size();
            
            if(size != pow(2, level)) return false;
            
            vector<int> temp;
            for(int i=0;i<size;i++){
                
                TreeNode *top = q.front();
                q.pop();
                temp.push_back(top->val);
                
                //2nd last level 
                if(level == height-1){
                    
                    if(top->left) ll.push_back(top->left->val);
                    else ll.push_back(-1);
                    if(top->right) ll.push_back(top->right->val);                    
                    else ll.push_back(-1); 
                    
                }
                else{
                    if(top->left) q.push(top->left);
                    if(top->right) q.push(top->right);                    
                }

            }
            
            level++;
            levels.push_back(temp);
            
        }
        
        return isEverythingLeft(ll);
 
    }
};