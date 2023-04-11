class Solution {
public:
    string removeStars(string s) {
        
        string st = "";
        
        for(auto i:s){
            if(i!='*'){
                st.push_back(i);
            }
            else{
                st.pop_back();
            }
        }
        return st;
    }
};