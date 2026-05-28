#include <bits/stdc++.h>
using namespace std;

int main() {
        string s;
        s="101010";
        //input

        int n=s.size();
        int count=0;
        int start=0;
        int end=n-1;
        while(start<=end){

            if(s[start]!=s[end]){
                count++;
                start++;
                end--;
            }
            else break;
        }

        cout<<n-2*count<<endl;

    return 0;
}
