#include<iostream>
using namespace std;

void binaryString(string s,int i,int num){
    if(i==num){
        cout<<s<<endl;
       return;
    }
    binaryString(s+'0',i+1,num);
    if(s.length()==0 || s[i-1]=='0'){
        binaryString(s+'1',i+1,num);
    }
}

int main(){
    int num=3;
    string s;
    binaryString(s,0,num);
    return 0;

}