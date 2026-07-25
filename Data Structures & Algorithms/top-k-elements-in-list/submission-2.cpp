class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        vector<vector<int>> p(n + 1);
        int value, freq;
        unordered_map<int, int> mp = {};
        vector<int> result = {};

        for (int i = 0; i < n; i++) {
            mp[nums[i]]++;
        }

        for (auto& it : mp) {
            value = it.first;
            freq = it.second;

            p[freq].push_back(value);
        }
        for (int i = p.size() - 1; i >= 0; i--) {
            if (result.size() >= k) {
                return result;
            }
            if (!p[i].empty()) {
                for (int x : p[i]) {
                    result.push_back(x);
                }
            } else {
                continue;
            }
        }
        return result;
    }
};
