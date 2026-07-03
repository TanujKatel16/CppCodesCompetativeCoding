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

        string s;
        cin>>s;

        vector<int> zeros(n,0);

        int count=0;

        for(int i=n-1;i>=0;i--){

            if(s[i]=='0'){
                count++;
            }
            else{
                zeros[i]=count;
            }
        }

        int xr=0;

        for(int i=0;i<n;i++){

            if(s[i]=='1'){
                xr^=zeros[i];
            }
        }

        if(xr){
            cout<<"Alice"<<endl;
        }
        else{
            cout<<"Bob"<<endl;
        }
    }

    return 0;
}