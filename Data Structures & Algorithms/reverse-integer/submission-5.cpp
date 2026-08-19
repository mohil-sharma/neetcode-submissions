class Solution {
   public:
    int reverse(int x) {
        int rev = 0;
        int n = 0;
        int count = 1;
        int c = 0;

        if (x >= (pow(2, 31) - 1)) {
            return 0;
        }

        if (x < 0) {
            x = x * -1;
            count = 0;
        }
        while (x >= 1) {
            if (n > INT_MAX / 10) return 0;
            rev = x % 10;
            x = x / 10;
            n = (n * 10) + rev;
        }

        if (count == 0) {
            return (-1 * n);
        }
        return n;
    }
};
