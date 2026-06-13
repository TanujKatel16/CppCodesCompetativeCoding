#include <bits/stdc++.h>
using namespace std;

const int N = 6005;
const int LOG = 13;

long long a[N];
int lgVal[N];
int rightBound[N];
int lastOcc[N];
int miniPos[N];
int maxiPos[N];

struct SparseTable{
    long long mini[N][LOG];
    long long maxi[N][LOG];

    void build(vector<long long>& arr,int n){
        for(int i=1;i<=n;i++){
            mini[i][0]=arr[i];
            maxi[i][0]=arr[i];
        }

        for(int level=1;level<LOG;level++){
            int len=(1<<level);

            for(int start=1;start+len-1<=n;start++){
                mini[start][level]=min(
                    mini[start][level-1],
                    mini[start+(len>>1)][level-1]
                );

                maxi[start][level]=max(
                    maxi[start][level-1],
                    maxi[start+(len>>1)][level-1]
                );
            }
        }
    }

    pair<long long,long long> query(int left,int right){
        int k=lgVal[right-left+1];

        long long mn=min(
            mini[left][k],
            mini[right-(1<<k)+1][k]
        );

        long long mx=max(
            maxi[left][k],
            maxi[right-(1<<k)+1][k]
        );

        return {mn,mx};
    }
};

void buildLogs(){
    for(int i=2;i<N;i++){
        lgVal[i]=lgVal[i/2]+1;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    buildLogs();

    for(int i=0;i<N;i++){
        miniPos[i]=1e9;
        maxiPos[i]=-1e9;
    }

    int t;
    cin>>t;

    SparseTable rmq;

    while(t--){
        int n;
        cin>>n;

        vector<long long> arr(n+1);

        for(int i=1;i<=n;i++){
            cin>>arr[i];
            a[i]=arr[i];
            lastOcc[i]=0;
        }

        int currentRight=n;

        for(int i=n;i>=1;i--){
            if(lastOcc[a[i]]){
                currentRight=min(
                    currentRight,
                    lastOcc[a[i]]-1
                );
            }

            rightBound[i]=currentRight;
            lastOcc[a[i]]=i;
        }

        rmq.build(arr,n);

        int answer=0;

        for(int len=n/2;len>=1;len--){
            vector<int> touched;

            for(int left=1;left+len-1<=n;left++){
                int right=left+len-1;

                if(right>rightBound[left]){
                    continue;
                }

                pair<long long,long long> res=
                    rmq.query(left,right);

                long long mini=res.first;
                long long maxi=res.second;

                if(maxi-mini!=len-1){
                    continue;
                }

                if(miniPos[mini]>n){
                    touched.push_back((int)mini);
                }

                miniPos[mini]=min(
                    miniPos[mini],
                    left
                );

                maxiPos[mini]=max(
                    maxiPos[mini],
                    left
                );
            }

            bool found=false;

            for(int mini:touched){
                int nextMini=mini+len;

                if(nextMini>n){
                    continue;
                }

                if(miniPos[nextMini]>n){
                    continue;
                }

                if(maxiPos[nextMini]-miniPos[mini]>=len ||
                   maxiPos[mini]-miniPos[nextMini]>=len){
                    found=true;
                    break;
                }
            }

            for(int mini:touched){
                miniPos[mini]=1e9;
                maxiPos[mini]=-1e9;
            }

            if(found){
                answer=len;
                break;
            }
        }

        cout<<answer<<"\n";
    }

    return 0;
}