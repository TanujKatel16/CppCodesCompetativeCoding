#include<bits/stdc++.h>
using namespace std;

void solve(){

    long long n;
    cin>>n;

    long long r=n%12;
    long long a=(r<=9?r:(r==10?22:11));

    if(a>n)cout<<-1<<"\n";
    else cout<<a<<" "<<n-a<<"\n";
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)solve();
}