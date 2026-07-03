#include <bits/stdc++.h>
using namespace std;
using ll=long long;

ll dp[20][11][2][2];
ll solve(int i,int prev,int tight,int lz,string &s){

    if(i==s.size()) return 1;
    if(dp[i][prev][tight][lz]!=-1) return dp[i][prev][tight][lz];

    int lb=0;
    int ub= (tight==1)?s[i]-'0':9;

    ll count=0;
    for(int dig=lb;dig<=ub;dig++){

        if(!lz && dig==prev) continue; //rejected
        count+=solve(i+1,dig,(tight && dig==ub),(lz && dig==0),s);

    }

    return dp[i][prev][tight][lz] = count;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll lower,upper;
    cin>>lower>>upper;
    
    string l=to_string(lower-1);
    string r=to_string(upper);
    memset(dp,-1,sizeof(dp));
    ll lans = solve(0,10,1,1,l);
    memset(dp,-1,sizeof(dp));
    ll rans = solve(0,10,1,1,r);
    ll ans=rans-lans;
    cout<<ans<<endl;

    return 0;
}