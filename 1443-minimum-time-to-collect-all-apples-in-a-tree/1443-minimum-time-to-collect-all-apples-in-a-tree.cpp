class Solution {
public:
    
    
    int dfs(int cur, int prev, unordered_map<int, vector<int>> &g, vector<bool> &hasApple){
        
        int time = 0, temp;
        
        for(auto i:g[cur]){
            
            if(i!=prev){
                
            temp = dfs(i, cur, g, hasApple);
            
            if(temp!=0 || hasApple[i]) time += temp+2;
            
            }
            
        }
        
        return time;
        
    }
    
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        
        unordered_map<int , vector<int>> graph;
        
        for(auto i:edges){
            graph[i[0]].push_back(i[1]);
            graph[i[1]].push_back(i[0]);
        }
        
        return dfs(0, -1, graph, hasApple);
        
                
    }
};