class Solution {
public:
    
    void dfs(vector<vector<int>> &graph, vector<vector<int>> &ans, vector<int> &temp, int i){
        
        temp.push_back(i);
        if(i==graph.size()-1){
            
            ans.push_back(temp);
            temp.pop_back();
            return;
            
        }
        
        for(auto j:graph[i]){
            
            dfs(graph, ans, temp, j);
           
        }
         
        temp.pop_back();
            
        
        
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        
        vector<int> temp;
        vector<vector<int>> ans;
        
        dfs(graph, ans, temp, 0);
        
        return ans;
        
    }
};