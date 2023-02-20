class Solution {
public:
    int minImpossibleOR(vector<int>& nums) {
        
        unordered_set<int> us;
        
        for(auto i:nums) us.insert(i);
        int i=0;
        while(true){
            
            int temp = pow(2, i);
            if(us.find(temp)==us.end()) return temp;
            i++;
            
        }
        return i;
        
    }
};