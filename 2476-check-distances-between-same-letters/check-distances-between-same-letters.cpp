class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        vector<int>mp (26, -1);
        for (int i = 0; i < s.length(); i++) {
            if (mp[s[i] - 'a'] == -1) {
                mp[s[i] - 'a'] = i + 1;
            } else {
                mp[s[i] - 'a'] = i - mp[s[i] - 'a'];
                if (mp[s[i] - 'a'] != distance[s[i] - 'a']) {
                    return false;
                }
            }
        }
        return true;
    }
};