#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;
        vector<long long> a(n);
        for(int i=0;i<n;i++) cin >> a[i];
        long long maxi=0;

        for(int i=0;i<n;i++){
            if(maxi>a[i]){
                maxi+=a[i];
            }
            else{
                maxi=a[i];
            }
        }
        cout << maxi << "\n";
    }
    return 0;
}