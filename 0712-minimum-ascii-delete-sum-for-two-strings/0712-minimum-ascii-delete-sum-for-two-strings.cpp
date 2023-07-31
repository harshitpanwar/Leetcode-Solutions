class Solution {
public:
    
    int f(string &s1, string &s2, int i, int j, vector<vector<int>> &dp){
        
        if(i>=s1.size() or j>=s2.size()) return 0;
        
        if(dp[i][j]!=-1) return dp[i][j];
                
        if(s1[i]==s2[j]) return dp[i][j] = s1[i] + f(s1, s2, i+1, j+1, dp);
        
        return dp[i][j] = max(f(s1, s2, i+1, j, dp), f(s1, s2, i, j+1, dp));
        
    }
    
    
    int minimumDeleteSum(string s1, string s2) {
        
        vector<vector<int>> dp(s1.size(), vector<int>(s2.size(), -1));
        int asci = f(s1, s2, 0, 0, dp);
        
        int sum1=0, sum2=0;
        for(char i: s1) sum1+=i;
        for(char i: s2) sum2+=i;
        
        return sum1+sum2-2*asci;
        
    }
};