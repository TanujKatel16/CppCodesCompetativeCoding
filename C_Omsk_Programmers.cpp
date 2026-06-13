#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {

        long long a, b, x;
        cin >> a >> b >> x;

        vector<long long> A;
        vector<long long> B;

        long long curr = a;
        A.push_back(curr);

        while (curr > 0) {
            curr /= x;
            A.push_back(curr);
        }

        curr = b;
        B.push_back(curr);

        while (curr > 0) {
            curr /= x;
            B.push_back(curr);
        }

        long long ans = 1e18;

        for (int i = 0; i < A.size(); i++) {
            for (int j = 0; j < B.size(); j++) {
                long long operations =
                    i + j + abs(A[i] - B[j]);
                ans = min(ans, operations);
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}