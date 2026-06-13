#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {

        int n; cin>>n;
        int mini=1e9;
        int maxi=-1e9;

        for(int i=0;i<n;i++){
            int val;
            cin>>val;
            mini=min(mini,val);
            maxi=max(maxi,val);
        }
        cout<<(maxi+1-mini)<<endl;
        
    }

    return 0;
}