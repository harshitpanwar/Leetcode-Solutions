class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        
        int ans = 0;
        
        for(int i = 0;i<strs[0].size();i++){
            
            string st ="";
            for(int j=0;j<strs.size();j++){
                
                char c = strs[j][i];
                st+=c;
    
            }
            
            string temp = st;
            sort(temp.begin(), temp.end());
            if(st!=temp) ans++;
        }
        
        return ans;
    }
};