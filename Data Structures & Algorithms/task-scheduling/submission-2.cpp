class Solution {
   public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char, int> mp;
        priority_queue<pair<int, char>> pq;
        priority_queue<pair<int, char>> temp;
        priority_queue<pair<int, char>> empty;
        int ele, freq;
        int t;
        vector<char> ch;
        int a;
        char c;

        for (int i = 0; i < tasks.size(); i++) {
            mp[tasks[i]]++;
        }
        for (auto& it : mp) {
            ele = it.first;
            freq = it.second;
            pq.push({freq, ele});
        }
        t = n;

        while (!pq.empty() && pq.top().first != 0) {
            n = t;
            while (n >= 0 && !pq.empty() && pq.top().first != 0) {
                n--;
                ch.push_back(pq.top().second);

                a = pq.top().first;
                a--;
                c = pq.top().second;

                temp.push({a, c});
                pq.pop();
            }
            while (n >= 0 && temp.top().first != 0) {
                ch.push_back('-');
                n--;
            }
            n = t;
            while (!temp.empty()) {
                pq.push(temp.top());
                temp.pop();
            }
        }
        return ch.size();
    }
};
