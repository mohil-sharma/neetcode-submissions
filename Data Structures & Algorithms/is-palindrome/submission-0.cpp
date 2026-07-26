class Solution {
   public:
    bool isPalindrome(string s) {
        string n;
        for (int w = 0; w < s.length(); w++) {
            if ((s[w] >= 48 && s[w] <= 57) || (s[w] >= 65 && s[w] <= 90) ||
                (s[w] >= 97 && s[w] <= 122)) {
                if (s[w] >= 65 && s[w] <= 90) {
                    s[w] = s[w] + 32;
                }
                n.push_back(s[w]);
            }
            if (s[w] == ' ') {
                continue;
            }
        }

        int i = 0;
        int j = n.size() - 1;
        while (i < j) {
            if (n[i] == n[j]) {
                i++;
                j--;
            } else {
                return false;
            }
        }
        return true;
    }
};
