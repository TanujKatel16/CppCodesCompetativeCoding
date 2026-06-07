#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){

    int n;
    cin>>n;

    vector<ll>h(n);
    for(auto &x:h)cin>>x;

    for(int k=0;k<n;k++){

        vector<ll>a(n);

        for(int i=0;i<n;i++)
            a[i]=h[(k+i)%n];

        vector<ll>pre(n),suf(n);

        pre[0]=a[0];
        for(int i=1;i<n;i++)
            pre[i]=max(pre[i-1],a[i]);

        suf[n-1]=a[n-1];
        for(int i=n-2;i>=0;i--)
            suf[i]=max(suf[i+1],a[i]);

        ll ans=0;

        for(int i=1;i<n;i++)
            ans+=min(pre[i-1],suf[i]);

        cout<<ans<<" ";
    }

    cout<<endl;
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)solve();
    return 0;
}