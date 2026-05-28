#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){ 

        int m;
        cin>>m;
        string s="";
        for(int i=0;i<m;i++){
            char ch;
            cin>>ch;
            s=s+ch;
        }
        //input

        int n=s.size();
        int count=0;
        int start=0;
        int end=n-1;
        while(start<=end){

            if(s[start]!=s[end]){
                count=count+2;;
                start++;
                end--;
            }
            else break;
        }

        cout<<n-count<<endl;
        
    }
    return 0;
}
