class Solution {
public:
    bool isValid(string st) {
        
        if(st.size()%2!=0) return false;
        stack<char> s;
        
        for(auto i:st){
            
            if(i=='(' or i=='[' or i=='{'){
                s.push(i);
            }
            else if(s.empty() and (i==')' or i==']' or i=='}')) return false;
            else if(s.top()=='(' and i==')') s.pop();
            else if(s.top()=='{' and i=='}') s.pop();
            else if(s.top()=='[' and i==']') s.pop();
            else return false;
            
        }
        
        if(s.size()!=0)return false;
        return true;
        
    }
};