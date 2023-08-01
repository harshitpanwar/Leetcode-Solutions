class Solution {
public:
    
    vector<vector<int>> ans;
    
    void f(int n, int k, int i, vector<int> &v){
        
        
        if(i>n){
            if(v.size()==k) ans.push_back(v);
            return;
        }
        
        if(n-i+1 + v.size()<k) return;

        
        v.push_back(i);
        f(n, k, i+1, v);
        v.pop_back();
        
        f(n, k, i+1, v);
        
        
    }
    
    vector<vector<int>> combine(int n, int k) {
        vector<int> v;
        f(n, k, 1, v);
        return ans;
    }
};