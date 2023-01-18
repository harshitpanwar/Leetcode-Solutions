class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int sum1 = 0 , sum2 = 0 , total = 0 , mx = INT_MIN , mn = INT_MAX ;
        for( auto v : nums ){
            sum1 = max( v , sum1+v) ;
            mx = max( mx , sum1 );
            sum2 = min( v , sum2+v );
            mn = min( mn , sum2 );
            total += v ;
        }
        return mx > 0 ? max( mx , total - mn ) : mx ;
    }
};