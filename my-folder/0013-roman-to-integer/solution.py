class Solution(object):
    def romanToInt(self, s):
        roman_value={"I":1,"V":5,"X":10,"L":50,"C":100,"D":500,"M":1000}
        total=0
        pre_value=0
        for char in reversed(s):
            curr_value=roman_value[char]
            if curr_value<pre_value:
                total-=curr_value
            else:
                total+=curr_value
            pre_value=curr_value
        return total
