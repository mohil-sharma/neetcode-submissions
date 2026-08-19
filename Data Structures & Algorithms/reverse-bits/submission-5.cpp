class Solution {
   public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t y = 0;
        int count = 32;

        while (count > 0) {
            y = y + (n & 1);
            count--;
            if (count < 1) {
                return y;
            }
            n = n >> 1;
            y = y << 1;
        }
        return y;
    }
};
