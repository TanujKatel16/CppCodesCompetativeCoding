#include <bits/stdc++.h>
using namespace std;

#define int long long

const int MOD=998244353;

int power(int a,int b){

    int ans=1;

    while(b){

        if(b%2!=0) ans=(ans*a)%MOD;
        a=(a*a)%MOD;
        b>>=1;
    }

    return ans;
}

signed main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){

        int n,m,r,c;
        cin>>n>>m>>r>>c;

        int total=n*m;
        int eq=0;

        if(n>=r && m>=c){
            eq=(n-r+1)*(m-c+1);
        }

        int freeVar=total-eq;

        cout<<power(2,freeVar)<<endl;
    }
}