#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
       int n,x;
       cin>>n>>x;
        vector<int>v;
        v.push_back(0);
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            v.push_back(temp);
        }
        v.push_back(x);

        int len=v.size();
        int maxi=INT_MIN;

        for(int i=1;i<len;i++){
            if(i==len-1){
                maxi=max(maxi,2*(v[i]-v[i-1]));
            }
            else{
                maxi=max(maxi,(v[i]-v[i-1]));
            }
        }
        cout<<maxi<<endl;

    

       
    }
    return 0;

}