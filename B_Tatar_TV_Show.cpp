#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {

        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        bool isPossible = true;

        for (int st = 0; st < k; st++) {

            int countOnes = 0;
            for (int i = st; i < n; i += k) {
                if (s[i] == '1') countOnes++;
            }
            if (countOnes % 2 != 0) {
                isPossible = false;
                break;
            }
        }
        if (isPossible) cout << "YES"<<endl;
        else cout << "NO"<<endl;
    }

    return 0;
}