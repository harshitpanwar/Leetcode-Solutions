class Solution {
public:
    
    int f(vector<int> &nums, int i, int sum, int target, vector<vector<int>> &dp){
        
        if(i==nums.size() and sum==target) return dp[i][sum+1000]=1;
        
        if(dp[i][sum+1000]!=-1) return dp[i][sum+1000];
        
        if(i>=nums.size()) return dp[i][sum+1000]=0;
        
        int pick = f(nums, i+1, sum+nums[i], target, dp);
        int nopick = f(nums, i+1, sum-nums[i], target, dp);
        
        return dp[i][sum+1000]=pick + nopick;   
        
    }
    
    int findTargetSumWays(vector<int>& nums, int target) {
        vector<vector<int>> dp(nums.size()+1, vector<int>(2001,-1));
        return f(nums, 0, 0, target, dp);
    }
};