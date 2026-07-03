#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n,c;
        cin>>n>>c;
        vector<int>a(n),b(n);
        int suma=0;
        int sumb=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            suma+=a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
            sumb+=b[i];
        }

        bool doSort=false;

        for(int i=0;i<n;i++){
            if(a[i]<b[i]){
                doSort=true;
                break;
            }
        }
        if(!doSort){
            cout<<suma-sumb<<endl;
            continue;
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        bool isMinus1=false;
        for(int i=0;i<n;i++){
            if(a[i]<b[i]){
                isMinus1=true;
                break;
            }
        }
        if(isMinus1){
            cout<<-1<<endl;
            continue;
        }
        else cout<<c+suma-sumb<<endl;
        
    }

    return 0;
}