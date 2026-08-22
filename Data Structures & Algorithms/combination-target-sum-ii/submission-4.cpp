class Solution {
   public:
    void helper(vector<int>& cand, int& target, int i,
                vector<vector<int>>& ans, vector<int> temp,
                set<vector<int>>& v) {

        if (target < 0) return;

        if (target == 0) {
            if (v.find(temp) != v.end()) {
                return;
            }
            ans.push_back(temp);
            v.insert(temp);
            return;
        }

        if (i == cand.size()) {
            return;
        }

        // Since cand is sorted
        if (cand[i] > target) return;

        // TAKE
        temp.push_back(cand[i]);
        target -= cand[i];

        helper(cand, target, i + 1, ans, temp, v);

        target += cand[i];
        temp.pop_back();

        // DON'T TAKE
        // Skip all duplicates of cand[i]
        int j = i + 1;
        while (j < cand.size() && cand[j] == cand[i]) {
            j++;
        }

        helper(cand, target, j, ans, temp, v);
    }

    vector<vector<int>> combinationSum2(vector<int>& cand, int target) {
        set<vector<int>> v;
        vector<vector<int>> ans;
        vector<int> temp;

        sort(cand.begin(), cand.end());

        helper(cand, target, 0, ans, temp, v);

        return ans;
    }
};