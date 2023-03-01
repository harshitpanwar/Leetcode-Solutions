class Solution(object):
    def divisibilityArray(self, word, m):
    
        n = len(word)
        div = [0] * n
        value = 0
        for i in range(n):
            value = (value * 10 + int(word[i])) % m
            if value == 0:
                div[i] = 1
        return div
        