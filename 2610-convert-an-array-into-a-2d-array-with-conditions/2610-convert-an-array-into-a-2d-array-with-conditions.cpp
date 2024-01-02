class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        
        vector<vector<int>> ans;
        
        unordered_map<int, int> mp;
        
        int maxi = INT_MIN;
        
        for(auto i:nums) mp[i]++, maxi = max(maxi, mp[i]);
        
        for(int i=0;i<maxi;i++){
            
            vector<int> temp;
            for(auto j:mp){
                
                if(j.second>0){
                    temp.push_back(j.first);
                    mp[j.first]--;
                }
                
            }
            
            ans.push_back(temp);
            
        }
        
        return ans;
        
    }
};