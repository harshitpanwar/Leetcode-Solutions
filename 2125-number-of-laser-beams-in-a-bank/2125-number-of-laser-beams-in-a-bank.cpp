class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        
        int total = 0;
        vector<int> v;
        
        for(string i: bank){
            
            int cnt = 0;
            for(int j=0;j<i.size();j++){
                
                if(i[j]=='1')cnt++;
                
            }
            
            if(cnt>0) v.push_back(cnt);
            
        }
        
        if(v.size()<=1) return 0;
        
        int prev = v[0];
        int cur;
        
        for(int i=1;i<v.size();i++){
            cur = v[i];
            total = total + cur * prev;
            prev = cur;
        }
        
        return total;
        
    }
};