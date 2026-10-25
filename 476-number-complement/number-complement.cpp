class Solution {
public:
    int findComplement(int num) {
         int x = num;
    int mask = 0;

    while (x > 0) {
        mask = (mask << 1) | 1;
        x = x >> 1;
    }

    return num ^ mask;
    }
};