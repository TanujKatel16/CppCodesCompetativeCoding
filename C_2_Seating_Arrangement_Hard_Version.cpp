#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){

        int n;
        long long x,m;
        cin>>n>>x>>m;

        string s;
        cin>>s;

        long long cnt=0;
        long long rem=x;
        long long free=0;
        long long alone=0;

        for(int i=0;i<n;i++){

            char ch=s[i];

            if(ch=='I'){

                if(rem==0) continue;

                rem--;
                free+=(m-1);
                cnt++;
            }
            else if(ch=='E'){

                if(free){

                    free--;
                    cnt++;
                }
                else{

                    if(alone>0 && rem>0){

                        alone--;
                        rem--;

                        free+=(m-1);
                        cnt++;
                    }
                }
            }
            else{

                if(free){

                    free--;
                    alone++;
                    cnt++;
                }
                else if(rem){

                    rem--;
                    free+=(m-1);
                    cnt++;
                }
            }
        }

        cout<<cnt<<endl;
    }

    return 0;
}