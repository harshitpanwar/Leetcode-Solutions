class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        
        int n = grid.size();
        queue<pair<int, int>> q;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                
                if(grid[i][j]==1)
                    q.push({i, j});
                
            }
        }
        
        vector<pair<int, int>> directions = {{0,1}, {0,-1}, {1,0}, {-1,0}};
        
        if(q.size()==0 or q.size()==n*n) return -1;
        
        int distance = -1;
        while(!q.empty()){
            
            int size = q.size();
            while(size--){
                
                auto [x, y] = q.front();
                q.pop();
                
                for(auto [dx, dy] : directions){
                    
                    int i = x+dx, j = y+dy;
                    if(i>=0 and j>=0 and i<n and j<n and grid[i][j]==0){
                        
                        grid[i][j]=1;
                        q.push({i, j});
                        
                    }
                    
                }
                
                
            }
            
            ++distance;
            
        }
        
        return distance;
        
    }
};