#include<iostream>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            arr[i]=temp;
        }

        if(arr[0]==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;

}