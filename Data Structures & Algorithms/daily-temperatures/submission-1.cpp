class Solution {
   public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int, int>> st;
        vector<int> v;
        int a;

        for (int i = (temperatures.size() - 1); i >= 0; i--) {
            while (!st.empty() && st.top().first <= temperatures[i]) {
                st.pop();
            }
            if (!st.empty()) {
                v.insert(v.begin(), ((st.top().second) - i));
            } else {
                v.insert(v.begin(), 0);
            }
            st.push({temperatures[i], i});
        }
        return v;
    }
};
