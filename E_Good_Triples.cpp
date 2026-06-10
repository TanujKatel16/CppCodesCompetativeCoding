#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {

        int n; cin>>n;

        vector<int>v(10);

        for(int i=0;i<=9;i++){
            for(int j=0;j<=9;j++){
                for(int k=0;k<=9;k++){
                    if(i+j+k<10){
                        v[i+j+k]++;
                    }
                }
            }
        }
        string s=to_string(n);
        long long sum=1;
        for(int i=0;i<s.size();i++){

            sum*=v[s[i]-'0'];

        }

        cout<<sum<<endl;


        
    }

    return 0;
}