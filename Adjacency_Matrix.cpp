#include <bits/stdc++.h>
using namespace std;

//Input Formal
// 6 4 (m,n)
// 1 4
// 2 3
// 5 6
// 2 9

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m,n;
    cin>>m>>n;

    int adjMat[m+1][n+1];

    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        adjMat[a][b]=1;
        adjMat[b][a]=1;

    }

    return 0;
}
