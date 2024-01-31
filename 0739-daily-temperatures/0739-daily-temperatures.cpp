class Solution {
public:
    
    //brute force approach also works but it gave TLE in my case
    //so we use a stack
    //stack is kind of a not strictly decreasing monotonic stack 
    
    vector<int> dailyTemperatures(vector<int>& temp) {
        
        int n=temp.size();
        vector<int> ans(n,0);
        stack<int> s;
        for(int i=0;i<n;i++){
            while(!s.empty() && temp[s.top()]<temp[i]){
                int temp = s.top();s.pop();
                ans[temp] = i - temp;
            }
            s.push(i);   
        }
        return ans;
    }
};