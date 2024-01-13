class Solution {
public:
    int minSteps(string s, string t) {
        
        unordered_map<char, int> mp1, mp2;
        for(char i:s) mp1[i]++;
        for(char i:t) mp2[i]++;
        
        int ans = 0;
        for(auto i: mp1){
            
            int freq1 = i.second;
            int freq2 = mp2[i.first];
            
            ans += freq1>freq2?freq1-freq2:0;
            
        }
        
        return ans;
        
    }
};