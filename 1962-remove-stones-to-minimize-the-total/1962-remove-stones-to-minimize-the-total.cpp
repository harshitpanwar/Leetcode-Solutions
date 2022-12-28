class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {

        priority_queue<int> maxh;
        int n = piles.size();

        for(auto i:piles) maxh.push(i);

        while(k--){
            int top = maxh.top();
            maxh.pop();
            top-=floor(top/2);
            maxh.push(top);
        }
        int sum = 0;
        while(n--){
            sum+=maxh.top();
            maxh.pop();
        }

        return sum;
        
    }
};