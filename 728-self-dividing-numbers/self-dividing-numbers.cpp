class Solution {
public:
   
bool divide(int a, int b) {
    if (b == 0) return false;
    if (a % b == 0) return true;
    return false;
}

bool digit_sep(int n) {
    int temp = n;

    while (temp > 0) {
        int digit = temp % 10;

        if (digit == 0 || !divide(n, digit)) {
            return false;
        }

        temp = temp / 10;
    }

    return true;
}

vector<int> selfDividingNumbers(int left, int right) {
    vector<int> result;

    for (int i = left; i <= right; i++) {
        if (digit_sep(i)) {
            result.push_back(i);
        }
    }

    return result;
}

};