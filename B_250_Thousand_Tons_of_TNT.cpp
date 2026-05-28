#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {

        int n;
        cin >> n;

        vector<long long> a(n+1), pref(n+1);

        for(int i=1;i<=n;i++){
            cin >> a[i];
            pref[i] = pref[i-1] + a[i];
        }

        long long ans = 0;

        for(int k=1;k<=n;k++){

            if(n % k != 0) continue;

            long long mx = LLONG_MIN;
            long long mn = LLONG_MAX;

            for(int i=k;i<=n;i+=k){

                long long sum = pref[i] - pref[i-k];

                mx = max(mx,sum);
                mn = min(mn,sum);
            }

            ans = max(ans, mx - mn);
        }

        cout << ans << "\n";
    }

    return 0;
}

