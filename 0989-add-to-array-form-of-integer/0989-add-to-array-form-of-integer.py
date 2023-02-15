class Solution(object):
    def addToArrayForm(self, num, k):
        """
        :type num: List[int]
        :type k: int
        :rtype: List[int]
        """
        ans = []
        
        sum = 0
        for i in num:
            sum = sum*10+i
        sum+=k
        
        st = str(sum)
        
        for i in st:
            ans.append(int(i))
            
        return ans
        