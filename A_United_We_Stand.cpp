#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];

        int mn = *min_element(v.begin(), v.end());
        vector<int> b;  // group of minimum elements
        vector<int> c;  // all others

        for (int x : v) {
            if (x == mn) b.push_back(x);
            else c.push_back(x);
        }

        if (b.empty() || c.empty()) {
            cout << -1 << '\n';
        } else {
            cout << b.size() << " " << c.size() << '\n';
            for (int x : b) cout << x << " ";
            cout << '\n';
            for (int x : c) cout << x << " ";
            cout << '\n';
        }
    }
    return 0;
}
