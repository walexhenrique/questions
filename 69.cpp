class Solution {
public:
    int mySqrt(int x) {
        double a = sqrt(x);
        int v = floor(a);
        return v;
    }
};