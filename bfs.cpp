#include<iostream>
#include<vector>
#include<stack>
#include<queue>
using namespace std;
int main(){

    int n=12;
    vector<vector<int>> adj(n+1);

        adj[1] = {2,3,4};
        adj[2] = {1,5,6};
        adj[3] = {1,7};
        adj[4] = {1,8};
        adj[5] = {2};
        adj[6] = {2};
        adj[7] = {3};
        adj[8] = {4,9};
        adj[9] = {8};
        adj[10] = {11,12};
        adj[11] = {10};
        adj[12] = {10};
    
    vector<int>vis(n+1,0);
    vector<int>ans;
    for(int i=1;i<=n;i++){

        if(!vis[i]){
            queue<int>q;
            q.push(i);

            while(!q.empty()){

                int val=q.front();
                q.pop();
                ans.push_back(val);
                vis[val]=1;
                for(auto it:adj[val]){
                if(!vis[it]) q.push(it);
                }
            }
        }
    }
    for(auto it:ans){
        cout<<it<<" ";
    }

    return 0;
    
}