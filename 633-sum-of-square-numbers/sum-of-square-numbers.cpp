class Solution {
public:
    bool judgeSquareSum(int c) {

        int n = sqrt(c);

        for (int i = 0; i <= n; i++) {
            int a = i * i;
            int b = c - a;
            int root = sqrt(b);

            if (root * root == b) {
                return true;
            }
        }

        return false;
    }
};