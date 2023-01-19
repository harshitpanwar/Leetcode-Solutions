class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> pre(k);
        pre[0]=1;
        int ans=0,sum=0;
        for(int x : nums){
             sum =(sum + x%k +k) %k;
             ans += pre[sum];
             pre[sum]++;
        }
        return ans;
    }
};