class Solution:
    def canMakeSubsequence(self, str1: str, str2: str) -> bool:
        n, m = len(str1), len(str2)
        j = 0  # Pointer for str2

        for i in range(n):
            if j < m and (str1[i] == str2[j] or (ord(str1[i]) - ord('a') + 1) % 26 + ord('a') == ord(str2[j])):
                j += 1

        return j == m
