class Solution {
public:
    
    int f(int l, int r, string &s, vector<vector<int>> &dp){
        
        if(l==r) return 1;
        if(l>r) return 0;
        
        if(dp[l][r]) return dp[l][r];
        
        if(s[l]==s[r]) return dp[l][r] = 2 + f(l+1, r-1, s, dp);
        return  dp[l][r] = max(f(l+1, r, s, dp), f(l, r-1, s, dp));
        
    }
    
    int longestPalindromeSubseq(string s) {
        
        int n = s.size();
        vector<vector<int>> dp(n, vector<int>(n));
        return f(0, n-1, s, dp);
        
    }
};