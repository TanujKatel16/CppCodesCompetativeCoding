#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        vector<long long>a(n);
        vector<long long>b(n);
        

        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        for(int i=0;i<n;i++){
            cin>>b[i];
        }

        vector<long long> c(n);

        for(int i=0;i<n;i++){
            c[i]=b[i]-a[i];
        }

        bool ok=true;
        long long prev=0;

        for(int i=0;i<n-1;i++){

            long long cur=c[i]+prev;

            if(cur<0){
                ok=false;
                break;
            }

            prev=cur;
        }

        if(ok && c[n-1]+prev>=0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}