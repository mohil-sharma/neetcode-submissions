class Solution {
   public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int len = matrix.size() - 1;
        int low;
        int high;
        int mid;

        for (int i = 0; i <= len; i++) {
            if (matrix[i][matrix[i].size() - 1] >= target) {
                low = 0;
                high = matrix[i].size() - 1;
                while (low <= high) {
                    mid = (low + high) / 2;
                    if (matrix[i][mid] == target) {
                        return true;
                    } else if (matrix[i][mid] > target) {
                        high = mid - 1;
                    } else {
                        low = mid + 1;
                    }
                }
                return false;
            }
        }
        return false;
    }
};
