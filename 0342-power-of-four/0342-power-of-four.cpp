class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==1) return true;
        if(n==0) return false;
        
        if(n>0 and (n & n-1)==0 and n%3==1) return true;
        return false;
        
        
    }
};