#include <bits/stdc++.h>
using namespace std;

int INF = 1e9;

int solve(vector<int>& v, int x, vector<int>& dp){

    if(x == 0) return 0;
    if(x < 0) return INF;

    if(dp[x] != -1) return dp[x];

    int ans = INF;

    for(int i = 0; i < v.size(); i++){
        ans = min(ans, 1 + solve(v, x - v[i], dp));
    }

    return dp[x] = ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;

    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    vector<int> dp(x+1, -1);

    int res = solve(v, x, dp);

    if(res == INF) cout << -1 << endl;
    else cout << res << endl;

    return 0;
}