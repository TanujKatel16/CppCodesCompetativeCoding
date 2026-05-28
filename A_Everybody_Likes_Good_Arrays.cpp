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
      
        int total_odd_mal=0;
        int total_even_mal=0;
        int odd_consecutive=0;
        int even_consecutive=0;

        for(int i=0;i<n;i++){
            if(v[i]%2!=0){
               odd_consecutive++;
            }
            else{
                if(odd_consecutive>0) total_odd_mal+=odd_consecutive-1;
                odd_consecutive=0;
            }
        }
        for(int i=0;i<n;i++){
            if(v[i]%2==0){
               even_consecutive++;
            }
            else{
                if(even_consecutive>0) total_even_mal+=even_consecutive-1;
                even_consecutive=0;
            }
        }
        if(odd_consecutive>0) total_odd_mal+=odd_consecutive-1;
        if(even_consecutive>0) total_even_mal+=even_consecutive-1;
        cout<<total_even_mal+total_odd_mal<<endl;

    }



    return 0;
}