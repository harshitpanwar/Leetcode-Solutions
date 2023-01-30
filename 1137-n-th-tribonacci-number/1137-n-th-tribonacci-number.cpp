class Solution {
public:
    int tribonacci(int n) {
        
        int n0=0, n1=1, n2=1;
        
        if(n==0) return n0;
        if(n==1) return n1;
        if(n==2) return n2;
        
        int ans=0;
        
        for(int i=3;i<=n;i++){
            
            ans = n2+n1+n0;
            n0=n1;
            n1=n2;
            n2=ans;
        }
        
        return ans;
        
        
    }
};