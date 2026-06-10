#include <bits/stdc++.h>
using namespace std;

#define int long long
const int INF = 1e9;

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    // dp[i][j] = min matched pairs using first i chars with j deletions
    vector<vector<int>> dp(n + 1, vector<int>(k + 1, INF));
    // choice[i][j] = 1 if deleted, 0 if kept
    vector<vector<int>> choice(n + 1, vector<int>(k + 1, -1));

    dp[0][0] = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= k; ++j) {
            if (dp[i][j] == INF) continue;

            int m = dp[i][j];
            int bal = i - j - 2 * m;

            // 1. Delete current character (costs 1 deletion, pairs stay same)
            if (j + 1 <= k && m < dp[i + 1][j + 1]) {
                dp[i + 1][j + 1] = m;
                choice[i + 1][j + 1] = 1; 
            }

            // 2. Keep current character (increases pairs only if ')' closes an open '(')
            int next_m = m + (s[i] == ')' && bal > 0 ? 1 : 0);
            if (next_m < dp[i + 1][j]) {
                dp[i + 1][j] = next_m;
                choice[i + 1][j] = 0; 
            }
        }
    }

    // Find the exact number of deletions that resulted in the fewest matches
    int best_j = min_element(dp[n].begin(), dp[n].end()) - dp[n].begin();

    // Backtrack to build the string
    string ans = "";
    int curr_j = best_j;
    for (int i = n; i > 0; --i) {
        if (choice[i][curr_j] == 1) {
            ans += '1';
            curr_j--;
        } else {
            ans += '0';
        }
    }

    reverse(ans.begin(), ans.end());
    cout << ans << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}