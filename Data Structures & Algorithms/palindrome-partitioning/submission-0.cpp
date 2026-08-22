class Solution {
   public:
    bool checkPalindrome(string& v) {
        int a = 0;
        int b = v.length() - 1;

        while (a < b) {
            if (v[a] == v[b]) {
                a++;
                b--;
            } else {
                return false;
            }
        }
        return true;
    }
    void helper(string s, int i, int j, vector<vector<string>>& ans, vector<string>& temp,
                string& v) {
        v = s.substr(i, j - i + 1);
        if ((j == s.length() - 1) && v != "") {
            if (checkPalindrome(v) == true) {
                temp.push_back(v);
                ans.push_back(temp);
                temp.pop_back();
                return;
            } else {
                return;
            }
        }
        if (checkPalindrome(v) == true && v != "") {
            temp.push_back(v);
            helper(s, j + 1, j + 1, ans, temp, v);
            temp.pop_back();
        } 
        helper(s, i, j + 1, ans, temp, v);
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> temp;
        string v = "";

        helper(s, 0, 0, ans, temp, v);

        return ans;
    }
};
