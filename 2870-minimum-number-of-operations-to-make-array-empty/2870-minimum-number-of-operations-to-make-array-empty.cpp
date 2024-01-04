class Solution {
public:
    
    int calculate(int num){
        
        if(num == 1 || num == 0) return 0;
        
        if(num%3==0){
            return num/3;
        }
        
        else if(num%2==0){
            
            return 1 + calculate(num-2);
            
        }
        else return 1 + calculate(num-3);
        
    }
    
    int minOperations(vector<int>& nums) {
        
        unordered_map<int, int> mp;
        
        int ans = 0;
        
        for(auto i: nums) mp[i]++;
        
        for(auto i:mp){
            
            // cout<<i.first<<" "<<i.second<<endl;
            if(i.second==1) return -1;
            ans += calculate(i.second);
            
        }
        return ans;
    }
};