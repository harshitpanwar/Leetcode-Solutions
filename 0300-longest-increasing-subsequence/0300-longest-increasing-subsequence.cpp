class Solution {
public:
    
    int f(vector<int> &nums, int cur, int prev, vector<vector<int>> &dp){
        
        if(cur>=nums.size()) return 0;
        
        if(dp[cur+50][prev+50]!=-1) return dp[cur+50][prev+50];
        
        int take = 0, not_take = 0;
                
        if(prev == -1 or (nums[cur]>nums[prev]))
            take = 1 + f(nums, cur+1, cur, dp);

        not_take = f(nums, cur+1, prev, dp);

        return dp[cur+50][prev+50] = max(take, not_take);
        
    }
    
    int lengthOfLIS(vector<int>& nums) {
        
        int n = nums.size();
        vector<vector<int>> dp(2600, vector<int>(2600, -1));
        
        return f(nums, 0, -1, dp);
        
    }
};