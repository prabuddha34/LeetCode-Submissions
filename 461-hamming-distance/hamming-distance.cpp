class Solution {
public:
    int hammingDistance(int x, int y) {
        int xr = x ^ y;
        int cnt = 0;

        while (xr != 0) {
            cnt += xr & 1;
            xr = xr >> 1;
        }

        return cnt;
    }
};