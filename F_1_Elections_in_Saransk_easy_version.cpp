#include <bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
const int N=500005;
int smallestPrime[N];
int countPrime[N];
void sieve(){

    for(int i=2;i<N;i++){
        smallestPrime[i]=i;
    }
    for(int i=2;i*i<N;i++){

        if(smallestPrime[i]==i){

            for(int j=i*i;j<N;j+=i){

                if(smallestPrime[j]==j){
                    smallestPrime[j]=i;
                }
            }
        }
    }
}
int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sieve();

    int t;
    cin>>t;

    while(t--){

        int n,x;
        cin>>n>>x;
        vector<int> usedPrimes;
        long long ans=1;

        for(int i=0;i<n;i++){

            int a;
            cin>>a;

            while(a>1){

                int prime=smallestPrime[a];
                int count=0;

                while(a%prime==0){
                    count++;
                    a/=prime;
                }

                if(countPrime[prime]==0){
                    usedPrimes.push_back(prime);
                }

                countPrime[prime]+=count;
            }
        }
        for(int i=0;i<usedPrimes.size();i++){

            int prime=usedPrimes[i];

            ans=(ans*(countPrime[prime]+1))%mod;
            countPrime[prime]=0;
        }
        cout<<ans<<endl;
    }

    return 0;
}