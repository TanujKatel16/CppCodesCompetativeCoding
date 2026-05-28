#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<long long> a(n);
        for(auto &x : a) cin >> x;

        long long ans = 0;
        long long cur = a[0];

        for(int i = 1; i < n; i++){
            if((a[i] > 0) == (cur > 0)) {
                cur = max(cur, a[i]);
            }
            else {
                ans += cur;
                cur = a[i];
            }
        }

        ans += cur;

        cout << ans << "\n";
    }
}