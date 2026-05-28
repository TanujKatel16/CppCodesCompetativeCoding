#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int>v;
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            v.push_back(temp);
        }

        bool check=true;
        int ans;

        for(int i=1;i<v.size();i++){
            if(v[i]<v[i-1]){
                ans=0;
                check=false;
                break;
            }
        }
        int min_diff=INT_MAX;
        if(check){

            for(int i=1;i<v.size();i++){
                int diff=v[i]-v[i-1];
                min_diff=min(min_diff,diff);
            }

        }
        if(check){
           ans=(min_diff/2)+1;
        }

        cout<<ans<<endl;

    }

    return 0;

}