class Solution {
public:
    int countNicePairs(vector<int>& v) {
        if (v.size() == 1)
            return 0;
        unordered_map<int, int> m;
        long long count = 0;
        for (int x : v) {
            int rev = 0, temp = x;
            for (; temp; temp /= 10)
                rev = rev * 10 + temp % 10;
            temp = x - rev;
            if (m.find(temp) != m.end())
                count += (long long)m[temp];
            m[temp]++;
        }
        return count % 1000000007;
    }
};