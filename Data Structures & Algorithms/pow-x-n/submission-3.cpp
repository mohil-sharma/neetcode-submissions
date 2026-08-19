class Solution {
   public:
    double myPow(double x, int n) {
        double y;
        double single=1;

        if (n < 0) {
            y = 1 / x;
            x=1/x;
            n=n*(-1);
            while (n >1) {
                y = y * x;
                n--;
            }
        } else if(n>0){
            y=x;
            while (n > 1) {
                y = y * x;
                n--;
            }
        }
        else{
            return single;
        }


        return y;
    }
};
