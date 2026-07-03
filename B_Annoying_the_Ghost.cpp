#include <bits/stdc++.h>
using namespace std;

long long bubbleSort(vector<int> &arr){

    int n=arr.size();
    long long swaps=0;
    for(int i=0;i<n;i++){
        bool sorted=true;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swaps++;
                sorted=false;
            }
        }
        if(sorted) break;
    }
    return swaps;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        vector<long long> a(n),b(n);

        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];

        vector<int> u(n,0);
        vector<int> pos;

        bool possible=true;

        for(int i=0;i<n;i++){

            int idx=-1;

            for(int j=0;j<n;j++){

                if(!u[j] && b[j]>=a[i]){
                    idx=j;
                    break;
                }
            }

            if(idx==-1){
                possible=false;
                break;
            }

            u[idx]=1;
            pos.push_back(idx);
        }

        if(!possible){
            cout<<-1<<endl;
            continue;
        }

        cout<<bubbleSort(pos)<<endl;
    }

    return 0;
}