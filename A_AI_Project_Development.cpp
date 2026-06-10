#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {

        int n,x,y,z;
        cin>>n>>x>>y>>z;

        int withoutAi=ceil((double)n/(x+y));
        int withAi=z+ceil((double)(n-z*x)/(x+10*y));

        cout<< min(withoutAi,withAi)<<endl;
        
    }

    return 0;
}