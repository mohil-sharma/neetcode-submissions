class Solution {
   public:
    int getSum(int a, int b) {
        int carry = 0;
        int x=0;
        x = a ^ b;
        carry = (a & b) << 1;
        x = x + carry;

        return x;
    }
};
