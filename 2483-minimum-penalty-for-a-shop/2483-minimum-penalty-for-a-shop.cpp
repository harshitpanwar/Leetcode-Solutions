class Solution {
public:
    int bestClosingTime(string customers) {
        
        vector<int> ymap, nmap;
        int cyes = 0, cno = 0;
        int mini = INT_MAX;
        int ans = 0;
        
        for(char i:customers){
            
            if(i=='Y') cyes++, ymap.push_back(cyes);
            else ymap.push_back(cyes);
            
            if(i=='N') cno++, nmap.push_back(cno);
            else nmap.push_back(cno);
            
        }
        
        nmap.push_back(cno);
        ymap.push_back(cyes);
        
        
        for(int i=0;i<=customers.size();i++){
            
            int cur_penalty = (i==0? 0: nmap[i-1]) + ymap[customers.size()-1] - ( i==0 ? 0: ymap[i-1]);
            if(cur_penalty<mini){
                mini = cur_penalty;
                ans = i;
            }
        }
        
        return ans;
    }
};