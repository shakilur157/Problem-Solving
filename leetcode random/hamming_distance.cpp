class Solution {
public:
    int hammingDistance(int x, int y) {
        int count = 0;
        int xr = x ^ y;

        while (xr) {
            int temp = xr & 1;
            count += temp;
            xr >>= 1;
        }
        return count;
    }
};
