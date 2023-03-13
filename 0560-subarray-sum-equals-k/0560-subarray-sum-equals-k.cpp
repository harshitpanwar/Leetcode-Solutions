class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        int sum = 0, ans=0;
        unordered_map<int, int> mp;
        mp[sum]=1;
        
        for(auto i:nums){
            
            sum+=i;
            
            if(mp[sum-k]>0)
                ans+=mp[sum-k];
            mp[sum]++;
            
            
        }
        
        return ans;
        
    }
};