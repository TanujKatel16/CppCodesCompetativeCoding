#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v={1,8,10,13};
  
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
                cout<<diff<<endl;
                min_diff=min(min_diff,diff);
            }

        }
        cout<<min_diff<<endl;
        if(check){
           ans=(min_diff/2)+1;
        }

        cout<<ans<<endl;

    return 0;

}