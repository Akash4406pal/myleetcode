class Solution {
public:
    int maxPalindromes(string s, int k) {
        int n = s.size();

        // isPalindrome[i][j] = true if s[i...j] is a palindrome
        vector<vector<bool>> isPalindrome(n, vector<bool>(n, true));

        // Build palindrome table
        for (int i = n - 1; i >= 0; i--) {
            for (int j = i + 1; j < n; j++) {
                isPalindrome[i][j] =
                    (s[i] == s[j]) && isPalindrome[i + 1][j - 1];
            }
        }

        // dp[i] = maximum palindromes we can get from index i onwards
        vector<int> dp(n + 1, 0);

        for (int i = n - 1; i >= 0; i--) {
            // Skip s[i]
            dp[i] = dp[i + 1];

            // Try every palindrome starting at i
            for (int j = i + k - 1; j < n; j++) {
                if (isPalindrome[i][j]) {
                    dp[i] = max(dp[i], 1 + dp[j + 1]);
                }
            }
        }

        return dp[0];
    }
};