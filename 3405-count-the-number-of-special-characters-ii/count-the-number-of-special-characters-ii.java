class Solution {
    public int numberOfSpecialChars(String word) {
        int[] firstUpper = new int[26];
        int[] lastLower = new int[26];

        // initialize
        for (int i = 0; i < 26; i++) {
            firstUpper[i] = Integer.MAX_VALUE;
            lastLower[i] = -1;
        }

        char[] arr = word.toCharArray();

        for (int i = 0; i < arr.length; i++) {
            char c = arr[i];

            if (c >= 'a' && c <= 'z') {
                lastLower[c - 'a'] = i;
            } else {
                int idx = c - 'A';
                firstUpper[idx] = Math.min(firstUpper[idx], i);
            }
        }

        int special = 0;

        for (int i = 0; i < 26; i++) {
            if (lastLower[i] != -1 &&
                firstUpper[i] != Integer.MAX_VALUE &&
                lastLower[i] < firstUpper[i]) {
                special++;
            }
        }

        return special;
    }
}