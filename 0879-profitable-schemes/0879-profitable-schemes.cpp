class Solution {
public:
    
    const int mod = 1e9 + 7;

    int f(int n, int minProfit, vector<int> &group, vector<int> &profit, int i, int cur_people, int cur_profit, vector<vector<vector<int>>> &dp){
        
        if(i==group.size() and cur_people<=n and cur_profit>=minProfit) return 1;
        
        if(cur_people>n) return 0;
        
        if(i>=group.size()) return 0;
        
        if(dp[i][cur_people][cur_profit]!=-1) return dp[i][cur_people][cur_profit];
        
        int pick = f(n, minProfit, group, profit, i+1, cur_people+group[i], min(minProfit, cur_profit+profit[i]), dp);
        int notpick = f(n, minProfit, group, profit, i+1, cur_people, cur_profit, dp);
        
        return dp[i][cur_people][cur_profit]=((long)pick+(long)notpick)%mod;
    
        
    }
    
    
    int profitableSchemes(int n, int minProfit, vector<int>& group, vector<int>& profit){
        
        vector<vector<vector<int>>> dp(101, vector<vector<int>>(101, vector<int>(101, -1)));
        return f(n, minProfit, group, profit, 0, 0, 0, dp);
    }
};