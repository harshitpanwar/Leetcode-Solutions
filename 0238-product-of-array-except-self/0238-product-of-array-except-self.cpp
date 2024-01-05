class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> prefix(n, 0), suffix(n, 0);
        
        for(int i=0;i<nums.size();i++){
            prefix[i] = (i>0?prefix[i-1]:1) * nums[i];
        }
        for(int i=n-1;i>=0;i--){
            suffix[i] = (i<n-1?suffix[i+1]:1) * nums[i];
        }
        
        
        
        vector<int> ans; 
        
        for(int i=0;i<nums.size();i++){
            
            int temp;
            
            if(i==0){
                ans.push_back(suffix[i+1]);
            }
            else if(i==n-1){
                ans.push_back(prefix[i-1]);
            }
            else{
                ans.push_back( prefix[i-1] * suffix[i+1]);
            }
            
        }
        
        return ans;
        
    }
};