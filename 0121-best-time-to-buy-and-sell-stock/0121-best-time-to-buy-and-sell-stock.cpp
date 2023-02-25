class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int m = prices[0];
        
        int profit = INT_MIN;
        
        for(int i=1;i<prices.size();i++){
            
            
            int temp = prices[i]-m;
            profit = max(profit,temp);
            
            m = min(m,prices[i]);
            
        }
        
        if(profit<0)
            return 0;
        return profit;
        
        
    }
};