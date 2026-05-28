#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {       
        int n;
        cin >> n;
        vector<int> v(n);
        
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int ans=v[0];
        for (int i = 1; i < n; i++) {
            ans=ans ^ v[i];
           
        }
        
        if(v.size()%2==0){
            if(ans==0){
                cout<<1<<endl;
            }          
            else cout<<-1<<endl;
        }
        else cout<<ans<<endl;

        
    }
    return 0;
}
