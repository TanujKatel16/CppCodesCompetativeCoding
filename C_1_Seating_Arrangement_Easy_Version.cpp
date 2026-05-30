#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){

        int n,x,m;
        cin>>n>>x>>m;

        string s;
        cin>>s;

        vector<int>dp(x+1,-1);
        dp[0]=0;

        for(int i=0;i<n;i++){

            vector<int>tdp=dp;

            if(s[i]=='I'||s[i]=='A'){

                for(int j=0;j<x;j++){
                    if(dp[j]==-1) continue;        // eslai continue gari diye
                    tdp[j+1]=max(dp[j]+1,tdp[j+1]);
                }
            }

            if(s[i]=='E'||s[i]=='A'){

                for(int j=1;j<=x;j++){
                    if(dp[j]==-1) continue;
                    int val=min(j*m,dp[j]+1); // j*m tah linei prxani
                    tdp[j]=max(val,tdp[j]);
                }
            }
            dp=tdp;
        }
        int ans=0;
        for(int i=0;i<=x;i++){
            ans=max(ans,dp[i]);
        }
        cout<<ans<<endl;
    }

    return 0;
}