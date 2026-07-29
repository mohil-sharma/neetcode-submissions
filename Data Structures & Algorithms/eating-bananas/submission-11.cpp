class Solution {
   public:
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(), piles.end());
        vector<int> temp = piles;
        int j = 0;
        int count = 0;
        int l = 1;
        int r = piles[piles.size() - 1];
        int mid;
        int min = 0;

        while (l <= r) {
            mid = (l + r) / 2;
            piles = temp;
            count = 0;
            j = 0;
            while (j < piles.size()) {
                if (piles[j] % mid == 0) {
                    count += piles[j] / mid;
                } else {
                    count += piles[j] / mid + 1;
                }
                

                if (j == piles.size()-1) {
                    if (count <= h) {
                        min = mid;
                        r = mid - 1;
                    }
                    else{
                        l=mid+1;
                    }
                }
                j++;
            }
        }
        return min;
    }
};
