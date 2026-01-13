class Solution {
public:
    bool isPowerOfThree(int n) {
        while(n==1) return true;
        while(n<=1 || n%3!=0) return false;
        return isPowerOfThree(n/3);
    }
};
