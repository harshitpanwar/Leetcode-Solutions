class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        
        long long cnt = 0;
        long long sum = 0;
        long long prev = 0;
        long long ans = 0;
        nums.push_back(1);
        
        for(auto i:nums){
            
            sum+=i;
            // cout<< cnt << " "<< sum<< " "<<prev<<endl;
            
            if(sum!=prev){
                // cout<<cnt<<endl;
                ans+= (cnt*(cnt+1))/2;
                cnt=0;
                prev = sum;
            }
            else if(sum==prev){
                cnt++;
            }
            
        }
        
        return ans;
        
    }
};