#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int ones = 0;
    int cur = 0, best = 0;

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if(x == 1) ones++;
        int val = (x == 0 ? 1 : -1);
        cur = max(val, cur + val);
        best = max(best, cur);
    }
    if(best == 0) cout << ones - 1;
    else cout << ones + best;
    return 0;
}