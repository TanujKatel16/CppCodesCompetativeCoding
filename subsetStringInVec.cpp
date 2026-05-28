#include<iostream>
using namespace std;
#include<string>
#include<vector>

vector<string> subset(string orignal,string run, int i,vector<string>&v){
    if(i==orignal.size()){
        v.push_back(run);
        return v;

    } 
    char ch=orignal[i];
    subset(orignal,ch+run,i+1,v);
    subset(orignal,run,i+1,v);
    return v;
   
}



int main(){
    string orignal="Tanu";
    vector<string>v;
    subset(orignal,"",0,v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    return 0;
}