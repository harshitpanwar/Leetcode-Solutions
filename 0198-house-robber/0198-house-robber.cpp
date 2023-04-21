class Solution {
public:
    

    int f(vector<int> &nums, int i, bool flag, vector<vector<int>> &dp){
        
        if(i==nums.size()) return 0;
        
        if(dp[i][flag]!=-1) return dp[i][flag];
        
        int take = 0, notake=0;
        if(flag){
            take = nums[i]+f(nums, i+1, false, dp);
        }
        notake = f(nums, i+1, true, dp);
        
        return dp[i][flag]=max(take, notake);
        
    }
    
    int rob(vector<int>& nums) {
        
        vector<vector<int>> dp(nums.size()+1, vector<int>(2, -1));

        return f(nums, 0, true, dp);
    }
};