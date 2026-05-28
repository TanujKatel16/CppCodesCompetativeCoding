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
        int v[n][n];
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>v[i][j];
                mp[v[i][j]]++;
            }
        }
        string s="YES";
        for(auto it:mp){

            if(it.second>n*(n-1)){
               s="NO";
               break; 
            }

        }
        cout<<s<<endl;

        
    }

    return 0;
}