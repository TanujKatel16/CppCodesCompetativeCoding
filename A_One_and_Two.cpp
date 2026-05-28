#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {       
        int n;
        cin >> n;
        vector<int> v(n);
        int totalTwo = 0;

        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if (v[i] == 2) totalTwo++;
        }

        if (totalTwo % 2 != 0) {
            cout << -1 << endl;
            continue;
        }

        int prefixTwo = 0;
        int ans = -1;

        for (int i = 0; i < n; i++) {
            if (v[i] == 2) prefixTwo++;
            if (prefixTwo == totalTwo / 2) {
                ans = i + 1; 
                break;
            }
        }

        cout << ans << endl;
    }
    return 0;
}
