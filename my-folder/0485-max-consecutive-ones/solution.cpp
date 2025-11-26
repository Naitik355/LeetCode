class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int curr = 0, m = 0;
        for (int x : nums) {
            if (x == 1) curr++;
            else {
                m = max(m, curr);
                curr = 0;
            }
        }
        return max(m, curr);
    }
};
