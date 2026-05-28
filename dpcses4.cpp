#include <bits/stdc++.h>
using namespace std;
int MOD=1e9+7;

// int solve(vector<int>& v, int x, int i, vector<vector<int>>& dp){

//     if(x == 0) return 1;
//     if(x < 0) return 0;
//     if(i >= v.size()) return 0;

//     if(dp[i][x] != -1) return dp[i][x];

//     int take = solve(v, x - v[i], i, dp)% MOD;
//     int notTake = solve(v, x, i+1, dp)% MOD;  

//     return dp[i][x] = (take + notTake)%MOD;
// }

int main() {

    int n, x;
    cin >> n >> x;

    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    vector<vector<int>> dp(n+1,vector<int>(x+1, -1));

    // cout << solve(v, x, 0, dp);
    for(int i=0;i<=x;i++){
       dp[i][0]=1;
    }

    for(int i=n-1;i>=0;i--){
        for(int sum=0;sum<=x;sum++){
            int take=0;
            int take = dp[j][i-v[i]]% MOD;
            int notTake = dp[j-1][i-v[i]] % MOD; 

        }
    }

    return 0;
}