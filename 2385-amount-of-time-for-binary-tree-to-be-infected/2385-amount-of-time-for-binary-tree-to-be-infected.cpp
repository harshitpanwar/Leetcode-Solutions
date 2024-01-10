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
    int amountOfTime(TreeNode* root, int start) {
        
        unordered_map<TreeNode*, TreeNode*> mp;
        queue<TreeNode*> q;
        TreeNode *s;
        q.push(root);
            
        while(!q.empty()){
            
            TreeNode* top = q.front();
            q.pop();
            if(top->val==start) s = top;
            
            if(top->left){
                mp[top->left] = top;
                q.push(top->left);
            }
            
            if(top->right){
                mp[top->right] = top;
                q.push(top->right);
            }
            
        }
        
        q = queue<TreeNode*>();
        
        q.push(s);
        
        unordered_map<TreeNode*, bool> visited;
        
        visited[s]=true;
        
        int time = 0;
        
        while(!q.empty()){
            
            int size = q.size();
            int fl = 0;           
            for(int i=0;i<size;i++){
                
                TreeNode *node = q.front();
                q.pop();

                if(node->left && !visited[node->left])
                    q.push(node->left), visited[node->left] = true, fl=1;

                if(node->right && !visited[node->right])
                    q.push(node->right), visited[node->right] = true, fl=1;

                if(mp[node] && !visited[mp[node]])
                    q.push(mp[node]), visited[mp[node]] = true, fl=1;

            }
            
            if(fl==1) time++;

        }
        
        return time;
        
    }
};