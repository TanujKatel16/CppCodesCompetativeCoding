#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int>nums(n);

        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        sort(nums.begin(),nums.end());
        int ans=n;
        int i=0;
        while(i<n){
            int j=i;
            while(j<n&&nums[j]==nums[i]){
                j++;
            }
            int l=i;
            int r=n-j;
            ans=min(ans,max(l,r));
            i=j;
        }
        cout<<ans<<endl;
    }

    return 0;
}