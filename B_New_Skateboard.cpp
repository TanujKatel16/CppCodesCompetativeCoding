#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
    cin>>str;

    long long count=0;
    int n=str.size();
    for(int i=n-1;i>=0;i--){
        if((str[i]-'0')%4==0) count++;
    }
    for(int i=n-1;i>0;i--){
        int num=10*(str[i-1]-'0')+(str[i]-'0');
        if(num%4==0) count+=i;
    }
    cout<<count<<endl;
    return 0;
}
