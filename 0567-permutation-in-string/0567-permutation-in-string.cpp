class Solution {
public:
    
    void printmap(unordered_map<char, int> &mp){
        
        for(auto i:mp){
            
            cout<<i.first<<" "<<i.second<<endl;
            
        }
        cout<<"endl"<<endl;
        
    }
    
    bool equal(unordered_map<char, int> &m1, unordered_map<char, int> &m2){
        
        for(char i='a';i<='z';i++){
            
            if(m1[i]!=m2[i]) return false;
            
        }
        
        return true;
        
    }
    
    bool checkInclusion(string s1, string s2) {
        
        if(s1.size()>s2.size()) return false;
        
        unordered_map<char, int> mp, m;
        
        for(auto i:s1) mp[i]++;
        
        int i;
        for(i=0;i<s1.size();i++){
            
            m[s2[i]]++;
            
        }
        
        // printmap(m);
        
        if(equal(m, mp)) return true;
        
        while(i!=s2.size()){
            
            m[s2[i]]++;
            
        // printmap(m);
            m[s2[i-s1.size()]]--;
            
        // printmap(m);
            
            if(equal(m, mp)) return true;
            
            i++;
            
        }
        
        return false;
        
        
        
    }
};