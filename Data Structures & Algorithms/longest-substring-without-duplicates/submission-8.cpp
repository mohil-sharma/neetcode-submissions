class Solution {
   public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<int> st = {};
        int longest = 0;
        int count = 0;
        int i = 0;
        int j;

        for (int i = 0; i < s.length(); i++) {
            st.clear();
            count = 0;
            j = i;
            while (j < s.length()) {
                if (st.find(s[j]) != st.end()) {
                    count = 0;
                    st.clear();
                }
                st.insert(s[j]);
                count++;
                if (longest < count) {
                    longest = count;
                }
                j++;
            }
        }
        return longest;
    }
};
