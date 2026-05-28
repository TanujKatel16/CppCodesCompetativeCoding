#include<bits/stdc++.h>
using namespace std;

void next_biggest(int arr[], int n, int ans[]) {

    stack<int> s;
    ans[n - 1] = n;
    s.push(n-1);

    for (int i = n - 2; i >= 0; i--) {
 
        while (!s.empty() && arr[s.top()] <= arr[i]) {
            s.pop();
        }       
        if (s.empty()) {
            ans[i] = n;
        } 
        else {
            ans[i] = s.top();
        }       
        s.push(i);
    }
}

int main() {
    int n = 8;
    int k=4;  // 0 1 2 3 4 5 6 7 
    int arr[] = {1,3,4,6,2,3,4,9}; //ans= 6,6,6,6,9
    int ans[n];
    int ans2[n-k+1];   // next greater idx= 1,2,3,7,5,6,7,8

    next_biggest(arr, n, ans);

    cout << "Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Next Greater Elements: ";
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout<<endl;
    int j=0;

    for(int i=0;i<n-k+1;i++){
        if(j<=i) j=i;   // j=0,i=0; max=1 -> j=3--> i+k=3
        int max=arr[j];
        while(j<i+k){
            max=arr[j];
            if(j<i+k)j=ans[j];
        }
        ans2[i]=max;
    }
    cout << "Next ans Elements: ";
    for (int i = 0; i < n-k+1; i++) {
        cout << ans2[i] << " ";
    }


    return 0;
}
