class Solution {
public:
    
    int getProduct(vector<int> &nums){
        
        int cnt = 0;
        for(auto i:nums){
            
            if(i==0) return 0;
            if(i<0) cnt++;
            
        }
        
        return cnt%2==0?1:-1;
        
    }
    
    int arraySign(vector<int>& nums) {
        return getProduct(nums);   
    }
};