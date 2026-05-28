#include<iostream>
#include<vector>
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

        vector<int>ans;
        ans.push_back(v[0]);
        for(int i=1;i<n;i++){
            if(v[i]>=v[i-1]) ans.push_back(v[i]);
            else{
                ans.push_back(v[i]);
                ans.push_back(v[i]);
            }
        }
        cout<<ans.size()<<endl;
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}