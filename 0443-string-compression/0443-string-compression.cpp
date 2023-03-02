class Solution {
public:
    
    void pushNum(int cnt, vector<char> &ans){
        
        if(cnt == 1) return ;
        string temp = to_string(cnt);
        for(auto i:temp){
            ans.push_back(i);
        }
        
    }
    
    int compress(vector<char>& chars) {
        
        chars.push_back(' ');
        
        vector<char> ans;
        int cnt = 1;
        
        char prev = ' ';
        
        for(auto i:chars){
            
            if(i == prev){
                
                cnt++;
                prev = i;
                
            }
            else{
                if(prev!=' ')
                ans.push_back(prev);
                pushNum(cnt, ans);
                cnt = 1;
                prev = i;
            }
            
        }
        
        chars = ans;
        return ans.size();
        
    }
};