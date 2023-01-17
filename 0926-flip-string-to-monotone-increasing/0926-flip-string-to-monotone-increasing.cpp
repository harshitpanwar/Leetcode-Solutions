class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int ans=0 ;
        int  once=0;
        for(int i =0; i < s.size(); i++){
            if(s[i]=='1'){
                once++;
            }else
             ans = min(once,ans+1);
        }
        return ans;
        
    }
};