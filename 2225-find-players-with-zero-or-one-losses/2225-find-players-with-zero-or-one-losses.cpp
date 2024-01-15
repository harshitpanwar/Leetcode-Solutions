class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        
        vector<vector<int>> ans;
        vector<int> winner_list, looser_list;
        unordered_map<int, int> winners, loosers;
        
        for(auto i: matches){
            
            winners[i[0]]++;
            loosers[i[1]]++;
            
        }
        
        for(auto i:loosers){
            
            if(loosers[i.first]==1){
                looser_list.push_back(i.first);
            }
            
        }
        
        for(auto i:winners){
            
            if(loosers.find(i.first)==winners.end()){
                winner_list.push_back(i.first);
            }
            
        }
        
        sort(winner_list.begin(), winner_list.end());
        sort(looser_list.begin(), looser_list.end());
        
        ans.push_back(winner_list);
        ans.push_back(looser_list);
        
        return ans;
        
        
    }
};