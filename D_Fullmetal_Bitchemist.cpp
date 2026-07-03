#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){

        long long n;
        string s;
        cin>>n>>s;
        long long total=n*(n+1)/2;
        vector<long long> cnt(3);
        cnt[0]=1;
        long long rem=0,bad=0,streak=1,alt=0;
        
        for(int i=0;i<n;i++){

            rem=(rem+(s[i]=='0'?1:2))%3;

            bad+=cnt[rem];
            cnt[rem]++;

            if(i>0 && s[i]!=s[i-1]) streak++;
            else streak=1;
            alt+=(streak-1)/2;
        }

        cout<<total-bad-alt<<endl;
    }
    return 0;
}