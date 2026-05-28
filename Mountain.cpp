#include<iostream>
using namespace std;
#include<vector>
int main(){
    vector<int>v={4,5,6,7,0,1,2};
    int n=v.size();
    int start=0;
    int end=n-1;

    while(start<=end){
        int mid=start+(end-start)/2;
        if(mid>mid-1 && mid>mid+1){
            return mid;
        }
        else if(mid>mid-1){
            start=mid+1;
        }
        else if(mid<mid-1){
            return mid-1;
        }
    }

}