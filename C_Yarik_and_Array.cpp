#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        vector<int> v(n);

        for(int i=0;i<n;i++)
            cin >> v[i];

        long long sum = v[0];
        long long maxi = v[0];

        for(int j=1;j<n;j++){

            if(abs(v[j])%2 != abs(v[j-1])%2)
                sum = max((long long)v[j], sum + v[j]);
            else
                sum = v[j];

            maxi = max(maxi, sum);
        }

        cout << maxi << endl;
    }
}