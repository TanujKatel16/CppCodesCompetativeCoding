#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        vector<int>b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int maxi=INT_MIN;
        int sum=0;
        int ans=0;
        for(int i=0;(i<k && i<n);i++){
           maxi=max(maxi,b[i]);
           sum+=a[i];
           ans=max(ans,sum+maxi*(k-i-1));
        }
        cout<<ans<<endl;
        
    }

    return 0;
}