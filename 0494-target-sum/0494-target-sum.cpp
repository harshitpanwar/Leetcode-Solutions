class Solution {
public:
    
    int f(vector<int> &nums, int i, int sum, int target){
        
        if(i==nums.size() and sum==target) return 1;
        
        
        if(i>=nums.size()) return 0;
        
        int pick = f(nums, i+1, sum+nums[i], target);
        int nopick = f(nums, i+1, sum-nums[i], target);
        
        return pick + nopick;   
        
    }
    
    int findTargetSumWays(vector<int>& nums, int target) {
        return f(nums, 0, 0, target);
    }
};