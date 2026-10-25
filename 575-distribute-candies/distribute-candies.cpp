class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        set<int> val;
        int n = candyType.size();

        for (int i = 0; i < n; i++) {
            val.insert(candyType[i]);
        }

        return min((int)val.size(), n / 2);
    }
};