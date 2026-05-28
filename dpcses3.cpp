#include <bits/stdc++.h>
using namespace std;

int MOD = 1e9+7;

int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    cin >> n >> x;

    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    vector<int> dp(x+1, 0);
    dp[0] = 1;

    for(int r = 1; r <= x; r++){
        for(int coin : v){
            if(r - coin >= 0){
                dp[r] = (dp[r] + dp[r - coin]) % MOD;
            }
        }
    }

    cout << dp[x] << '\n';
}