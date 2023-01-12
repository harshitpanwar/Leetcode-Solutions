class Solution {
public:
    
    vector<int> path;
    
    void dfs(int cur, int prev, int target, vector<vector<int>> &g, vector<int> &p){
        
        if(cur==target){
            p.push_back(cur);
            path = p;
            p.pop_back();
            return;
        }
        
        p.push_back(cur);
        
        for(auto i:g[cur]){
            if(i!=prev){
                
                dfs(i, cur, target, g, p);
                
            }
        }
        
        p.pop_back();
        
    }
    
    int ans = INT_MIN;
    
    void dfs2(int cur, int prev, int total, vector<int> &amount, vector<vector<int>> &g){
        
        if(g[cur].size()==1 and cur!=0){
            
            ans = max(ans, total+amount[cur]);
            return;
        }
        
        for(auto i:g[cur]){
            
            if(i!=prev){
                
                dfs2(i, cur, total+amount[cur], amount, g);
                
            }
            
        }
        
        
    }
    
    int mostProfitablePath(vector<vector<int>>& edges, int bob, vector<int>& amount) {
        
        int n = amount.size();
        vector<vector<int>> graph(n);
        
        for(auto i:edges){
           graph[i[0]].push_back(i[1]);
           graph[i[1]].push_back(i[0]);
        }
        
        vector<int> p;
        dfs(0, -1, bob, graph, p);
        
        int m = path.size();
        
        // for(auto i:path)cout<<i<<" ";
        // cout<<endl;
        
        if(m%2!=0){
            
            amount[path[m/2]]/=2;
            
        }
        
        for(int i=m%2?m/2+1:m/2;i<m;i++){
            amount[path[i]]=0;
        }
        
        // for(auto i:amount)cout<<i<<" ";
        // cout<<endl;
        
        
        dfs2(0, -1, 0, amount, graph);
        
        return ans;
        
        
    }
};