#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){

        int n,k;
        bool check=false;
        cin>>n>>k;
        vector<int>v(n);

        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            v[i]=temp;
        }

        for(int i=0;i<n;i++){
            if(v[i]==k){
                cout<<"YES"<<endl;
                check=true;
                break;
            }
        }
        if(!check){
            cout<<"NO"<<endl;
        }

    }
    return 0;

}