class Solution {
public:
    
    bool isVowel(char c){
        
        if(c=='a' or c=='e' or c=='i' or c=='o' or c=='u') return true;
        return false;
        
    }
    
    int maxVowels(string s, int k) {
        
        int maxi = INT_MIN;
        
        int temp = 0;
        for(int i=0;i<k;i++){
            if(isVowel(s[i])) temp++;
        
        }
        maxi = max(temp, maxi);
        
        for(int i=k;i<s.size();i++){
            
            if(isVowel(s[i])) temp++;
            if(isVowel(s[i-k]))temp--;
            
            maxi = max(maxi, temp);
        }
        
        return maxi;
        
        
    }
};