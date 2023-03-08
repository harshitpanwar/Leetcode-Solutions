class Solution {
public:
    
    int check(vector<int> &piles, int mid){
        
        int time = 0;
        
        for(int pile : piles){
            int div = pile / mid;
            time += div;
            
            if(pile % mid != 0) time++; 
        }            
        
        // cout<<time<<endl;
        
        return time;
        
    }
    
    int minEatingSpeed(vector<int>& piles, int h) {
    
        int mini = 1;
        int maxi = INT_MIN;
        for(auto i:piles) maxi = max(i, maxi);
        // sort(piles.begin(), piles.end());
        
        while(mini < maxi){
            
            int mid = (mini+maxi)/2;
            // cout<<mini<<" "<<mid<<" "<<maxi<<endl;
            
            if(check(piles, mid) <= h) maxi = mid;
            else mini = mid+1;
            
        }
        
        return mini;
        
    }
};