#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {       
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int check=v[0];
        bool arg=true;
        for(int i=0;i<n;i++){
            if(v[i]!=check){
                arg=false;
                break;
            }
        }
        sort(v.begin(),v.end());
        if(arg) cout<<"NO"<<endl;       
        else{
            cout<<"YES"<<endl;
            cout<<v[n-1]<<" ";
            for(int i=0;i<n-1;i++){
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
    }



    return 0;
}