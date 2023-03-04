class Solution {
public:
    long long coloredCells(int n) {
                
        if(n==1) return 1;
        if(n==2) return 5;
        if(n==3) return 13;
        
        long long cnt = 0;
        
        long long ans = 13;
        
        for(int i=4;i<=n;i++){
            
            ans += 4 * 3 + cnt * 4;
            cnt++;
            
        }
        
        return ans;
        
    }
};