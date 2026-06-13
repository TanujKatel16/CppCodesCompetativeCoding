#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){

        int n,k;
        cin>>n>>k;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            mp[x]++;
        }
        vector<pair<int,int>>v;
        for(auto it:mp){
            v.push_back(it);
        }
        bool odd=true;
        bool gap=true;

        for(int i=0;i<v.size();i++){

            if(v[i].second%2==0){
                odd=false;
            }

            if(i+1<v.size()){

                if(v[i+1].first-v[i].first<=k){
                    gap=false;
                }
            }
        }
        if(odd && gap) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;  
    }

    return 0;
}