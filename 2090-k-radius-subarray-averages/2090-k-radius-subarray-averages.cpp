class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
     
        if(k==0)return nums;
        
        if(k>nums.size()) k=nums.size();
        
        vector<int> ans;
         
        if(k*2>=nums.size()){
            
            for(int i=0;i<nums.size();i++) ans.push_back(-1);
            return ans;
            
        }
       
        long long int sum = 0;
        for(int i=0;i<k;i++) ans.push_back(-1), sum+=nums[i];
        
        for(int i=k;i<=2*k;i++){
            
            sum+=nums[i];
            
        }
        
        int i=0;
        int j=k*2+1;
        // cout<<nums[i]<<" "<<nums[j]<<endl;;
        while(j<nums.size()){

            // cout<<sum<<endl;
            // cout<<nums[i]<<" "<<nums[j]<<endl;
            
            ans.push_back(sum/(2*k+1));
            sum-=nums[i];
            sum+=nums[j];
            j++;i++;
            
        }
        
        ans.push_back(sum/(2*k+1));
        
        for(int i=0;i<k;i++) ans.push_back(-1);
        
        return ans;
    }
};