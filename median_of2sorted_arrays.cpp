#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;
int main(){

    int arrA[]={1,2};
    int arrB[]={3,4};
    int m=sizeof(arrA)/sizeof(arrA[0]);
    int n=sizeof(arrB)/sizeof(arrB[0]);  // 1,2,3,5,5,6,7,7,8,12,15,42    for even n/2, n/2+1  for odd : (n+1)/2
    int tempA=0;
    int tempB=0;
    double tanuj=-1;

    vector<int>ans;
    while(tempA!=m && tempB!=n){

        if(arrA[tempA]>=arrB[tempB]){
            ans.push_back(arrB[tempB]);
            tempB++;
        }
        else if(arrA[tempA]<arrB[tempB]){
            ans.push_back(arrA[tempA]);
            tempA++;
        }

    }
    if(tempA==m){
        while(tempB!=n){
            ans.push_back(arrB[tempB]);
            tempB++;
        }
    }
    else if(tempB==n){
        while(tempA!=m){
            ans.push_back(arrA[tempA]);
            tempA++;
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    int size=ans.size();
    if(size%2==0){
        tanuj= ((ans[(size/2)] + ans[((size/2)-1)])*1)/2.0;
    }
    else tanuj=ans[((size+1)/2)-1];
    cout<<fixed<<setprecision(5)<<tanuj;





    return 0;
}