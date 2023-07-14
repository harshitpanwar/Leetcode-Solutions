class Solution {
public:
    int longestSubsequence(vector<int>& arr, int diff) {
        
        int res = 1;
        
        unordered_map<int,int> mp; 
        
        for(int i = 0 ; i < arr.size() ; i++){
            mp[arr[i]] = mp[arr[i]-diff]+1;
            res = max(res,mp[arr[i]]);
        }
        
        return res;
    }
};
