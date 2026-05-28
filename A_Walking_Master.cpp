#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int count=0;
        if(b>d)count=-1;
        else{
            count+=d-b;
            a=a+count;
            if(a<c) count=-1;
            else count+=a-c;
        }

        cout<<count<<endl;

        
    }
    return 0;
}