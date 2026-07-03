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
        vector<int>nums(n);
        for(int i=0;i<n;i++)cin>>nums[i];

        for(int i=0;i<nums.size();i++){
           for(int j=i+1;j<nums.size();j++){
              if(nums[j]>nums[i]) nums[j]=nums[i];
           }
        }
        int ans=0;
        for(int i=0;i<n;i++)ans+=nums[i];
        cout<<ans<<endl;
        
    }

    return 0;
}