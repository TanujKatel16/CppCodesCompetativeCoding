#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {       
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int pos_count = 0, neg_count = 0;
        for (int i = 0; i < n; i++) {
            if (v[i] == -1) neg_count++;
            else pos_count++;
        }

        int count = 0;


        while (neg_count > pos_count) {
            neg_count--;
            pos_count++;
            count++;
        }


        if (neg_count % 2 == 1) {
            count++;
            neg_count--;
            pos_count++;
        }

        cout << count << endl;
    }
    return 0;
}
