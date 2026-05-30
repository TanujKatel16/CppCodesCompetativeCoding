#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {

        int n;
        cin>>n;

        vector<long long>nums(n);

        for(int i=0;i<n;i++){
            cin>>nums[i];
        }

        long long sum=0;
        long long mini=1e18;

        for(int i=0;i<n;i++){

            sum+=nums[i];
            mini=min(mini,sum/(i+1));
            cout<<mini;
            if(i!=n-1) cout<<" ";
        }

        cout<<endl;
    }

    return 0;
}