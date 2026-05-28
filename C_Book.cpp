#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        
        int n;
        cin>>n;
        vector<vector<int>>adj(n+1);
        // Created Adj list
        for(int i=1;i<n+1;i++){
            int num;
            cin>>num;
            for(int j=0;j<num;j++){
                int m;
                cin>>m;
                adj[m].push_back(i);
            }
        }
        //InDegree Array Created
        vector<int>inDegree(n+1);
        for(int i=1;i<n+1;i++){
            for(auto it : adj[i]){
                inDegree[it]++;
            }
        }
        // We'll do topological sort using Kahn Algo
        queue<int>q;
        vector<int>ans;
        for(int i=1;i<n+1;i++){
            if(inDegree[i]==0){
                q.push(i);
            }
        }
        while(!q.empty()){
            int node=q.front();
            q.pop();
            ans.push_back(node);
            for(auto it: adj[node]){
               inDegree[it]--;
               if(inDegree[it]==0) q.push(it);
            }
        }
        //Thus we got the topo sorted output
        // for(int i=0;i<n;i++){
        //     cout<<ans[i]<<" ";
        // }
        if(ans.size()!=n){
            cout<<-1<<endl;
            continue;
        }
        vector<int>dp(n+1,1);
        for(auto it: ans){
            for(auto b:adj[it]){
                if(it>b) dp[b]=max(dp[b],dp[it]+1);
                else dp[b]=max(dp[b],dp[it]);
            }
        }
        int rand=1;
        for(int i=1;i<n+1;i++){
            rand=max(rand,dp[i]);
        }
        cout<<rand<<endl;




        
    }

    return 0;
}