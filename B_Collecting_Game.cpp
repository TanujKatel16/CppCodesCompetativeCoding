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
        vector<int>v(n);
        vector<pair<int,int>>sorted(n);
        for(int i=0;i<n;i++){
            cin>>v[i];            //20 5 1 4 2
            sorted[i].first=v[i];
            sorted[i].second=i;
        }

        auto lambda=[](pair<int,int>a,pair<int,int>b){
            return a.first<b.first;
        };

        sort(sorted.begin(),sorted.end(),lambda); // (1,2) (2,4) (4,3) (5,1) (20,0)

        // CHANGE 1: int -> long long (to avoid overflow)
        vector<long long>cSum(n);

        cSum[0]=sorted[0].first;
        for(int i=1;i<n;i++){
            cSum[i]=cSum[i-1]+sorted[i].first;  // CummulativeSum:  1 3 7 12 32
        }

        // CHANGE 2: introduce reach array
        vector<int>reach(n);

        // CHANGE 3: last element reaches itself
        reach[n-1]=n-1;

        // CHANGE 4: propagate from right to left
        for(int i=n-2;i>=0;i--){
            if(cSum[i]>=sorted[i+1].first)
                reach[i]=reach[i+1];
            else
                reach[i]=i;
        }

        vector<int>result(n);

        // CHANGE 5: fill result using reach instead of while loop
        for(int i=0;i<n;i++){
            result[sorted[i].second]=reach[i];
        }

        for(int i=0;i<n;i++){
            cout<<result[i]<<" ";
        }

        cout<<'\n';      
    }

    return 0;
}