class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int cnt = 0;
        for (string& w : words) {
            if (w.size() > s.size()) {
                continue;
            }
            bool ok = true;
            for (int i = 0; i < w.size(); i++) {
                ok &= (w[i] == s[i]);
            }
            cnt += ok;
        }
        return cnt;
    }
};
