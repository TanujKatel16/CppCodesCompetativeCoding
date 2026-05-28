#include<iostream>
using namespace std;
#include<vector>

void merge(vector<int>&a,vector<int>&b,vector<int>&ans){
    int i=0,j=0,k=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<=b[j]) ans[k++]=a[i++];
        else ans[k++]=b[j++];
    }
    if(i==a.size()) while(j<b.size()) ans[k++]=b[j++];
    if(j==b.size()) while(i<a.size()) ans[k++]=a[i++];
}

void mergeSort(vector<int>&v){
    int n=v.size();
    if(n==1) return;
    int n1=n/2,n2=n-n1;

    vector<int>a(n1),b(n2);
    for(int i=0;i<n1;i++){
        a[i]=v[i];
    }
    for(int i=0;i<n2;i++){
        b[i]=v[n1+i];
    }
    mergeSort(a);
    mergeSort(b);
    merge(a,b,v);
    a.clear();
    b.clear();
}
int main(){
    vector<int>v={4,6,1,9,3,7,0};
    mergeSort(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}