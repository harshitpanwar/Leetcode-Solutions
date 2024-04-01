class Solution {
public:
    int lengthOfLastWord(string s) {     
        int end = s.size()-1, len=0;
        while(end>=0 && s[end]==' ') end--;
        while(end>=0 && s[end]!=' ') len++,end--;    
        return len;
    }
};