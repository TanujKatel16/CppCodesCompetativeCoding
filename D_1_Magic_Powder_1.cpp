#include <bits/stdc++.h>
using namespace std;
#define int long long

bool isPossible(vector<int>&a,vector<int>&b,int mid,int k){

    int n=a.size();

    for(int i=0;i<n;i++){

        if(a[i]*mid>b[i]){

            if(a[i]*mid<=b[i]+k){
                k = b[i]+k - a[i]*mid;
            }
            else return false;
        }
    }
    return true;


}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    vector<int>b(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }

    int lo=0;
    int hi=2e9;
    int ans=0;
    while(hi>=lo){

        int mid=lo+(hi-lo)/2;
        if(isPossible(a,b,mid,k)){
            ans=mid;
            lo=mid+1;
        }
        else hi=mid-1;
    }
    cout<<ans<<endl;

    return 0;
}