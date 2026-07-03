#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    int ans=1;

    for(int i=2;i*i<=n;i++){

        if(n%i==0){

            int eAddhunxan=1;
            int singleGroupTotal=1;

            while(n%i==0){

                n=n/i;
                eAddhunxan*=i;
                singleGroupTotal += eAddhunxan;

            }
            ans*=singleGroupTotal;

        }

    }
        if(n>1){
            ans*=(1+n);
        }

        cout<<ans<<endl;

    

    return 0;
}