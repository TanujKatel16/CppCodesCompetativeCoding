#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> adj(n + 1);

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }

    vector<int> inDeg(n + 1);

    for (int i = 1; i <= n; i++) {
        for (auto it : adj[i]) {
            inDeg[it]++;
        }
    }

    queue<int> q;

    for (int i = 1; i <= n; i++) {
        if (inDeg[i] == 0)
            q.push(i);
    }

    vector<int> ans;

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        ans.push_back(node);

        for (auto it : adj[node]) {
            inDeg[it]--;

            if (inDeg[it] == 0)
                q.push(it);
        }
    }

    if (ans.size() != n) {
        cout << "IMPOSSIBLE";
    } else {
        for (auto x : ans)
            cout << x << " ";
    }

    return 0;
}