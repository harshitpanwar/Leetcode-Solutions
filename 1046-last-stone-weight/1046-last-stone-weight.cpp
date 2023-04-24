class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        priority_queue<int> maxh;
        
        for(auto i:stones) maxh.push(i);
        
        while(!maxh.empty()){
            
            int a=0, b=0;
            a = maxh.top();
            maxh.pop();
            
            if(!maxh.empty()) b = maxh.top();
            else return a;
            maxh.pop();
            
            maxh.push(max(a-b, b-a));
                
            
        }
        
        return maxh.top();
        
        
    }
};