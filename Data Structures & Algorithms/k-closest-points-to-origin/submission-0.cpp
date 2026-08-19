class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<int> s;
        vector<vector<int>> v;
        priority_queue<pair<float , int>, vector<pair<float , int>>,
                       greater<pair<float , int>>>
            pq;
        int x, y;
        float ans;
        int a;

        for (int i = 0; i < points.size(); i++) {
            x = points[i][0];
            y = points[i][1];
            ans = sqrt(pow(x, 2) + pow(y, 2));
            pq.push({ans, i});
        }

        for (int i = 0; i < k; i++) {
            a = pq.top().second;
            s.push_back(points[a][0]);
            s.push_back(points[a][1]);
            v.push_back(s);
            s.clear();
            pq.pop();
        }

        return v;
    }
};