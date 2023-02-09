class Solution {
public:
    
    
    int f(vector<int> &nums, int i, vector<int> &dp){
        
        int n = nums.size()-1;

        if(dp[i]!=0) return dp[i];
        
        if(i==n) return 0;
        
        int mini = 1e9;
        
        int size = nums[i];
        
        for(int j=1;j<=size;j++){
            
            if(i+j<=n){
                int ans = 1 + f(nums, i+j, dp);
                mini = min(mini, ans);

            }
        }
        
        return dp[i]=mini;
        
    }
    
    int jump(vector<int>& nums) {
        
        vector<int> dp(nums.size());
        
        return f(nums, 0, dp);
        
    }
};