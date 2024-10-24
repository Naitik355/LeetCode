class Solution(object):
    def reverse(self, x):
        INT_min,INT_max=-2**31,2**31-1
        isneg=x<0
        reversedstr=str(abs(x))[::-1]
        reversedint=int(reversedstr)
        if isneg:
            reversedint=reversedint*-1
        if reversedint<INT_min or reversedint > INT_max:
            return 0
        
        return reversedint

