#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {

        int n;
        cin>>n;
        string s="";
        unordered_map<char,int>mp;
        vector<int>v;
        int count=0;
        int p=n;
        while(p){
           char ch;
           cin>>ch;
           s+=ch;
           if(mp.find(ch)==mp.end()){
            count++;
            mp[ch]++;
           }
           v.push_back(count);
           p--;
        }
        int ans=0;
        for(int i=0;i<n;i++){
            ans+=v[i];
        }
        cout<<ans<<endl;
        
    }

    return 0;
}