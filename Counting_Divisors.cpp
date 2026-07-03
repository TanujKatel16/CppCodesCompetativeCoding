#include <bits/stdc++.h>
using namespace std;

void spf(vector<int> &sieve, int n){

    for(int i=0;i<=n;i++) sieve[i]=i;   
    for(int i=2;i*i<=n;i++){    // log(log(n))
        
        if(sieve[i]==i){

            for(int j=i*i;j<=n;j+=i){
                if(sieve[j]==j){
                   sieve[j]=i;
                }
            }
        }
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;

    vector<int>sieve(1000000+1);
    spf(sieve,1000000);

    while(t--){

        int n;
        cin>>n;
        int ans=1;

        while(n>1){
            
            int divisor=sieve[n];
            int count=0;
            while(n % divisor == 0){
            
                count++;
                n=n/divisor;
                
            }
            ans*=(count+1);

        }
        cout<<ans<<endl;
   }

    return 0;
}