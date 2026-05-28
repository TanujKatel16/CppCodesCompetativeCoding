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

        int noo=0;
        int noe=0;

        for(int i=0;i<n;i++){
            if(v[i]%2==0) noe++;
            else noo++;
        }
        if(noo==0) cout<<"Yes"<<endl;
        else if(noe==0){
            if(noo%2==0) cout<<"YES"<<endl;
            else cout<<"No"<<endl;
        }
        else{
            if(noo%2==0) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }

    }

    return 0;

}