class Solution {
public:
    bool wordPattern(string pattern, string s) {
        
        unordered_map<char, string> m;
        unordered_map<string, char> mp;
        
        stringstream ss(s);
        string temp;
        int i=0;
        
        while(ss>>temp){
            
            if(m.find(pattern[i])!=m.end()){
                if(m[pattern[i]]!=temp) return false;
            }
            m[pattern[i]] = temp;
            if(mp.find(temp)!=mp.end()){
                if(mp[temp]!=pattern[i]) return false;
            } 
            mp[temp] = pattern[i];
            i++;
        }
        
        if(i!=pattern.size()) return false;
        
        return true;
        
    }
};