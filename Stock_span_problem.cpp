#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main(){

    int arr[]={2,1,5,6,1,8,9,3};  
    int num=sizeof(arr)/sizeof(arr[0]);
    stack<int>v2;
    int ans[num];
    ans[num-1]=num;
    v2.push(num-1);
    for(int i=num-2;i>=0;i--){
        while(v2.size() && arr[v2.top()]>arr[i]){
            v2.pop();
        }
        if(v2.size() && arr[v2.top()]<arr[i]){           
            ans[i]=arr[v2.top()]; //
            v2.push(i);
        }
        else if(v2.size()==0){
            ans[i]=6;
            v2.push(i);

        }

    } 
    for(int i=0;i<num;i++){
        cout<<ans[i]<<" ";
    }
                            
    return 0;
}