#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {

        long long n,k;
        cin>>n>>k;

        string s1,s2;
        cin>>s1>>s2;

        long long setBitsins1=0;
        long long setBitsins2=0;
        long long setBitsins3=0;

        for(int i=0;i<n;i++){

            if(s1[i]=='1')setBitsins1++;
            if(s2[i]=='1')setBitsins2++;

            if((s1[i]-'0')^(s2[i]-'0'))
                setBitsins3++;
        }

        long long totals1=setBitsins1*(n-setBitsins1);
        long long totals2=setBitsins2*(n-setBitsins2);
        long long totals3=setBitsins3*(n-setBitsins3);

        long long p=(1LL<<k);

        long long c1,c2,c3;

        if(k&1){

            c1=(p+1)/3;
            c2=(p+1)/3;
            c3=(p+1)/3;

        }else{

            c1=(p+2)/3;
            c2=(p+2)/3;
            c3=(p-1)/3;
        }

        cout<<c1*totals1+c2*totals2+c3*totals3<<"\n";
    }

    return 0;
}