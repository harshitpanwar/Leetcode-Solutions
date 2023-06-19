class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        
        int maxi = 0;
        int prev = 0;
        int cur = 0;
        for(auto i:gain){
            
            // cout<<cur<<" ";
            cur = cur+i;
            maxi = max(maxi, cur);
            prev = i;
            
        }
        return maxi;
        
    }
};