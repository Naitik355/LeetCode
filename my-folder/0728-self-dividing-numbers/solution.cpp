class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for (int i = left; i <= right; i++) {
            int num = i;
            bool ok = true;
            while (num > 0) {
                int digit = num % 10;
                if (digit == 0 || i % digit != 0) {
                    ok = false;
                    break;
                }
                num /= 10;
            }
            if (ok) ans.push_back(i);
        }
        return ans;
    }
};

