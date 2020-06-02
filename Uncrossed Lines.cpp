class Solution {
public:
    int maxUncrossedLines(vector<int>& A, vector<int>& B) {

        int n = A.size();
        int m = B.size();
        if (n == 0 || m == 0) {
            return 0;
        }

        int dp[501][501] = {};
        cout<<dp[0][0];
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= m; ++j) {
                if (A[i - 1] == B[j - 1]) {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                } else {
                    dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
                }
            }
        }

        return dp[n][m];
    }
};
