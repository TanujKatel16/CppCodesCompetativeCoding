#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int num;
        cin>>num;
        int count=0;
        bool check;
        while(num>0){
            int temp=num%10;
            if(temp!=0) count++;
            num=num/10;
            if(count>1){
                check=false;
                break;
            }
        }
        if(check==false) cout<<
    }
}