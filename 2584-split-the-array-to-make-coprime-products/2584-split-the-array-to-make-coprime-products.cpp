class Solution {
public:
    
void remove(int n, unordered_map<int, int> &st){
    
    if (n <= 1) {
        return;
    }
    while (n % 2 == 0) {
        if(st[2]>0)
        st[2]--;
        n /= 2;
    }
    while (n % 3 == 0) {
        if(st[3]>0)
        st[3]--;
        n /= 3;
    }
    for (int i = 5; i * i <= n; i += 6) {
        while (n % i == 0) {
            if(st[i]>0)
            st[i]--;
            n /= i;
        }
        while (n % (i+2) == 0) {
            if(st[i+2]>0)
            st[i+2]--;
            n /= (i+2);
        }
    }
    if (n > 1) {
        if(st[n]>0)
        st[n]--;
    }
    return;
    
}

void primeFactors(int n, unordered_map<int, int> &st) {
    if (n <= 1) {
        return;
    }
    while (n % 2 == 0) {
        st[2]++;
        n /= 2;
    }
    while (n % 3 == 0) {
        st[3]++;
        n /= 3;
    }
    for (int i = 5; i * i <= n; i += 6) {
        while (n % i == 0) {
            st[i]++;
            n /= i;
        }
        while (n % (i+2) == 0) {
            st[i+2]++;
            n /= (i+2);
        }
    }
    if (n > 1) {
        st[n]++;
    }
    return;
}
    
bool coPrime(unordered_map<int, int> &a, unordered_map<int, int> &b){
    
    for(auto i: a){
        if(b[i.first]>0) return false;
    }
    return true;
    
}
    
    int findValidSplit(vector<int>& nums) {
        
        unordered_map<int, int> a, b;
        
        for(auto i:nums) primeFactors(i, b);
        
        for(int i=0;i<nums.size()-1;i++){
            
            primeFactors(nums[i], a);
            remove(nums[i], b);
            
            if(coPrime(a, b)) return i;
            
        }
        
        return -1;
        
    }
};