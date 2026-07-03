#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){

        long long n,d;
        cin>>n>>d;

        vector<long long> nums(n);
        for(int i=0;i<n;i++) cin>>nums[i];

        vector<long long> pre(3*n+1,0);

        for(int i=0;i<3*n;i++){
            pre[i+1]=pre[i]+nums[i%n];
        }

        long long ans=0;
        for(int i=0;i<n;i++){

            int mid=i+n;
            long long sum=pre[mid+d+1]-pre[mid-d];
            sum-=nums[i];
            long long val=2*d*nums[i]-sum;
            if(val>0) ans+=val;

        }

        cout<<ans<<endl;
    }

    return 0;
}