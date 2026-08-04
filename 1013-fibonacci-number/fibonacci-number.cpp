class Solution {
public:
    int fibo(int n, vector<int>& v) {
        if (n <= 1)
            return n;
        if (v[n] != -1)
            return v[n];
        return v[n] = fibo(n - 1, v) + fibo(n - 2, v);
    }
    int fib(int n) {
        vector<int> v(n+1, -1);
        return fibo(n, v);
    }
};

        // Time Complexity- O(2^n)
        // if (n <= 1) return n;
        // return fib(n - 1) + fib(n - 2);