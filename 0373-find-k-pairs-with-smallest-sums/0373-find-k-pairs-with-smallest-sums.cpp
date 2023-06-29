class Solution {
    
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        
        pair<int, pair<int, int>> p;
        priority_queue<pair<int, pair<int, int>>> pq;
        int m = INT_MAX;
        for(int i = 0; i< nums1.size(); i++){  
            for(int j = 0; j< nums2.size(); j++){
                int sum  = nums1[i] + nums2[j];
                if(pq.size() == k){
                    if(sum > pq.top().first) break;
                    else {
                        pq.pop();
                        pq.push({sum, { nums1[i], nums2[j]}});
                    }
                }
                else pq.push({sum, { nums1[i], nums2[j]}});
            }
        }
        vector<vector<int>> ans;
        int z = 0;
        while(!pq.empty() && k--){
            auto anspair  = pq.top().second;
            int first = anspair.first, sec = anspair.second;
            vector<int> v;
            v.push_back(first);
            v.push_back(sec);
            ans.push_back(v);
            pq.pop();
        }
        return ans;
    }
};
