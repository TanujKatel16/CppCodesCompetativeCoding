#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {

        int n;
        cin>>n;

        vector<int>nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        sort(nums.begin(),nums.end(),greater<int>());
        bool check=true;
        for(int i=0;i<n-2;i++){

            if(nums[i+2]!=(nums[i]%nums[i+1]) ){
                check=false;
                break;
            }

        }
        if(check==false){
            cout<<-1<<endl;
            continue;
        }
        else{
            cout<<nums[0]<<" "<<nums[1]<<endl;
        }

        
    }

    return 0;
}