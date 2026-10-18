class Solution {
public:
    string longestNiceSubstring(string s) {
        int n = s.size();
        string ans = "";

        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                string sub = s.substr(i, j - i + 1);
                bool nice = true;

                for (char c : sub) {
                    if (islower(c) && sub.find(toupper(c)) == string::npos) {
                        nice = false;
                        break;
                    }

                    if (isupper(c) && sub.find(tolower(c)) == string::npos) {
                        nice = false;
                        break;
                    }
                }

                if (nice && sub.size() > ans.size()) {
                    ans = sub;
                }
            }
        }

        return ans;
    }
};