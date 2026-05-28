#include<iostream>
using namespace std;
#include<string>
#include<vector>

void subset(string orignal,string run, int i){
    if(i==orignal.size()){
        cout<<run<<endl;
        return;

    } 
    char ch=orignal[i];
    subset(orignal,ch+run,i+1);
    subset(orignal,run,i+1);
   
}



int main(){
    string orignal="Ta";
    subset(orignal,"",0);

    return 0;
}