class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        
        int maxi = INT_MIN;
        int prev = maxi;
        
        sort(points.begin(), points.end());

        for(int i=1;i<points.size();i++){
            
            maxi = max(abs(points[i][0]-points[i-1][0]), maxi);
            
        }
        
        return maxi;
        
    }
};