class Solution {
public:     
    
    vector<int> mergemap(vector<int> &mp, vector<int> &m){
        
        vector<int> ans(26);
        for(int i=0;i<26;i++){
            ans[i]=mp[i]+m[i];
        }
        
        return ans;
    }
    
    vector<int> dfs(unordered_map<int, vector<int>> &g, string &labels, int cur, int prev, vector<int> &ans){
        
        vector<int> mp(26);
        
        mp[labels[cur]-'a']=1;
        vector<int> temp(26);
        for(auto i:g[cur]){
            
            if(i!=prev){
                temp = dfs(g, labels, i, cur, ans);
                mp = mergemap(mp, temp);
                
            }
            
        }
        
        ans[cur] = mp[labels[cur]-'a'];
        
        return mp;
        
        
    }
    
    vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) {
        
        vector<int> ans(n);
        unordered_map<int, vector<int>> graph;
        
        for(auto i:edges){
            graph[i[0]].push_back(i[1]);
            graph[i[1]].push_back(i[0]);
        }
        
        dfs(graph, labels, 0, -1, ans);
        
        return ans;
        
    }
};