class Solution {
public:
    
    bool check(vector<int> &w, int days, int mid){
        
        int cnt = 1;
        int sum = 0;
        
        for(auto i:w){
            
            sum+=i;
            // if(mid==11)
            // cout<<sum<<endl;
            if(sum>mid) ++cnt, sum=i;
            
        }
        // cout<<cnt<<endl;
        if(cnt<=days) return true;
        return false;
        
    }
    
    int shipWithinDays(vector<int>& weights, int days) {
        
  auto maxi = accumulate(begin(weights), end(weights), 0);
  auto mini = max(maxi / days, *max_element(begin(weights), end(weights)));

        int mid;
        while(mini<maxi){
            
            mid = (mini+maxi)/2;
            // cout<<mini<<" "<<mid<<" "<<maxi<<endl;

            if(check(weights, days, mid)) maxi = mid;
                // , cout<<1<<endl;
            else mini = mid+1;
            // , cout<<2<<endl;
            
        }
        
        return mini;
        
        
    }
};