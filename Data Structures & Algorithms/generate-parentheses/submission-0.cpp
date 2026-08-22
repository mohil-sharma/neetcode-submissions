class Solution {
   public:
    void helper(int n, vector<string>& ans, string& temp, int open, int close) {
        if (close > open) {
            return;
        }
        if (temp.length() == (2 * n)) {
            ans.push_back(temp);
            return;
        }

        //explore
        if(open<n){
            temp=temp+'(';
            helper(n, ans, temp, open+1, close);
            temp.pop_back();
        }
        if(close<open){
            temp=temp+')';
            helper(n, ans, temp, open, close+1);
            temp.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string temp = "";
        int close = 0;
        int open = 0;


        helper(n, ans, temp, open, close);

        return ans;
    }
};
