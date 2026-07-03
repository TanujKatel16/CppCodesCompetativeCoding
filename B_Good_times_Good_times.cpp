#include<bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){

        string s;
        cin>>s;

        int y=1;

        for(int i=0;i<s.size();i++){
            y*=10;
        }

        y++;

        cout<<y<<endl;
    }

    return 0;
}