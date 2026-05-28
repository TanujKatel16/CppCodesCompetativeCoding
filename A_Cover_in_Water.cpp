#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){


        int n;
        cin>>n;
        string s;
        for(int i=0;i<n;i++){
            char ch;
            cin>>ch;
            s=s+ch;
        }

        int count=0;
        bool check=false;
        int three_game=0;
        for(int i=0;i<n;i++){
            if(s[i]=='.'){
               count++;
               three_game++;
               if(three_game==3){
                cout<<2<<endl;
                check=true;
                break;
               }
            }
            else{
                three_game=0;
            }
        }
        if(check==false) cout<<count<<endl;

    }

    return 0;
}