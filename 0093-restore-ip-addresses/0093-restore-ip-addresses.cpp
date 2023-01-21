class Solution {
public:
 bool isValid(string str)
    {
        int n=str.size();
        if(n==1){
            return true;
        }
        if(n>3||str[0]=='0'){
            return false;
        }
        int num =stoi(str);
        if(num>255){
            return false;
        }
        return true;
    }
 void helper(string s,int i,int par,vector<string>& ans,string temp){
        if(i==s.size()|| par==4 ){
            if(i==s.size() && par==4){
                ans.push_back(temp.substr(0,temp.size()-1));
               return;
            }
            return;
        }
        helper(s,i+1,par+1,ans,temp+s[i]+".");
        if(s.size()>i+1 && isValid(s.substr(i,2))){
            helper(s,i+2,par+1,ans,temp+s.substr(i,2)+".");
        }
         if(s.size()>i+2 && isValid(s.substr(i,3))){
            helper(s,i+3,par+1,ans,temp+s.substr(i,3)+".");
        }
    }
    vector<string> restoreIpAddresses(string s) {
         vector<string>ans;
        if(s.size()>12 || s.size()<4){
            return ans;
        }
       string temp;
        helper(s,0,0,ans,temp);
        return ans;
        
    }
   
};
