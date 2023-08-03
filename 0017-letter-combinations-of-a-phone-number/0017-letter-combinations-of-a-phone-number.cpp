class Solution {
public:
    
    vector<string> ans;
    
    void f(string &digits, int i, unordered_map<char, string> &mp, string &cur){
        
        if(i>=digits.size()) {
            if(cur!="")
            ans.push_back(cur);
            return;
        };
                
        
        for(auto j: mp[digits[i]]){
            
            cur.push_back(j);
            f(digits, i+1, mp, cur);
            cur.pop_back();
            
        }
        
    }
    
    vector<string> letterCombinations(string digits) {
        
        unordered_map<char, string> mp = {
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"}
        };
        string cur = "";
        f(digits, 0, mp, cur);
        return ans;
        
    }
};