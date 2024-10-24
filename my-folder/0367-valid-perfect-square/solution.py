class Solution(object):
    def isPerfectSquare(self, num):
        if num<0:
            return("Sq root f no less than 0 is imaginary")
        else:
            c=num**0.5
            if c.is_integer():
                return(True)
            else:
                return False
