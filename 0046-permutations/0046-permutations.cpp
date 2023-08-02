class Solution {
public:
    
    
    vector<vector<int>> ans;
    
    void f(vector<int> &nums, int i, vector<int> &v, unordered_map<int, int> &mp){
        
        if(v.size()==nums.size() or i>nums.size()){
            ans.push_back(v);
            return;
        }
        
        for(int j=0;j<nums.size();j++){
            
            if(!mp[j]){
                
                v.push_back(nums[j]);
                mp[j]=1;
                f(nums, j+1, v, mp);
                mp[j]=0;
                v.pop_back();
                
            }
            
        }
        
        
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        
        unordered_map<int, int> mp;
        vector<int> v;
        
        f(nums, 0, v, mp);
        
        return ans;
        
    }
};