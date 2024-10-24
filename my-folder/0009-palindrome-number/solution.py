class Solution(object):
    def isPalindrome(self, x):
        temp=x
        rev_text=0
        while(x>0):
            c=x%10
            rev_text=rev_text*10+c
            x=x//10
        if rev_text==temp:
            return True
        else:
            return False


