#include<iostream>
using namespace std;
int main(){
    int a=1000;
    int b=25;
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    } 
    cout<<a;

    return 0;
}
