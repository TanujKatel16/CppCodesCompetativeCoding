#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;
        vector<long long> nums(n);
        int pos=0;
        long long xr=0;

        for(int i=0;i<n;i++){

            cin>>nums[i];
            if(nums[i]>0) pos++;
            xr^=nums[i];
            
        }

        if(pos<=1){
            cout<<0<<endl;
            continue;
        }

        int ans=0;

        if(xr==0) ans=1;
        else{
            for(int i=0;i<n;i++){
                if((xr^nums[i])<nums[i]) ans++;
            }
        }

        cout<<ans%998244353<<endl;
    }

    return 0;
}