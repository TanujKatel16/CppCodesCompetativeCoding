#include<iostream>
using namespace std;
#include<algorithm>
#include<climits>
int main(){
        int n;
        cin>>n;
        int mini=INT_MAX;

        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            int calc;
            if(temp>0) calc=temp;
            else if(temp<0) calc=0-temp;
            else{
                mini=0;
                break;
            }
            mini=min(calc,mini);
        }
        cout<<mini<<endl;

    return 0;
}