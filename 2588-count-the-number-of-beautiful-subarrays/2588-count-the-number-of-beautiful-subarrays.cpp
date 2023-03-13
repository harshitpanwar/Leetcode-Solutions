class Solution {
public:
    long long beautifulSubarrays(vector<int>& nums) {
        
        long long ans = 0, sum = 0;
        unordered_map<int, int> mp;
        mp[sum]=1;
        
        for(auto i:nums){
            
            sum^=i;
            
            ans+=mp[sum];
            mp[sum]++;
            
        }
        
        return ans;
    }
};