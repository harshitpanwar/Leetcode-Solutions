class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        
        if(n==0) return 1;
        
        int s = flowerbed.size();
        
        if(s==1){
            if(flowerbed[0]==0 and n==1) return true;
            else if(flowerbed[0]==1 and n==0) return true;
            else return false;
        } 
        
        for(int i=0;i<flowerbed.size();i++){
            
            if(i==0){
                if(flowerbed[i]==0 and flowerbed[i+1]==0){
                    flowerbed[i]=1;
                    n--;
                }
            }
            else if(i==s-1){
                if(flowerbed[i]==0 and flowerbed[i-1]==0){
                    flowerbed[i]=1;
                    n--;
                }
            }
            else{
                if(flowerbed[i]==0 and flowerbed[i+1]==0 and flowerbed[i-1]==0){
                    flowerbed[i]=1;
                    n--;
                }
            }
            
        }
        
        return n<=0;
        
    }
};