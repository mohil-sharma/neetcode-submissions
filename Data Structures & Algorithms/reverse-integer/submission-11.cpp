class Solution {
   public:
    int reverse(int x) {
        int rev = 0;
        int n = 0;

        while (x >= 1 || x <= -1) {
            rev = x % 10;
            x = x / 10;
            if (n > INT_MAX / 10) return 0;
            if (n < INT_MIN / 10) return 0;
            if (n == 214748364 && rev > 7) return 0;
            if (n == -214748364 && rev < -8) return 0;
            n = (n * 10) + rev;
        }
        return n;
    }
};
