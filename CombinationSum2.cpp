#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

void help(vector<vector<int>>&v,vector<int>& candidates,int target,int idx,vector<int>&temp){
        
        if(target==0){
            v.push_back(temp);
            return;
        }
         if(target<0){
            return;
        }
    
        for(int i=idx;i<candidates.size();i++){
            
            if (i > idx && candidates[i] == candidates[i-1]) continue;
            temp.push_back(candidates[i]);
            help(v,candidates,target-candidates[i],i+1,temp);
            temp.pop_back();
        }
    }        

int main(){
        int target=5;
        vector<int>candidates={1,1,2,3,4,4,5};
        vector<vector<int>>v;
        vector<int>temp;
        sort(candidates.begin(),candidates.end());
        help(v,candidates,target,0,temp);
        int m=v.size();

        for(int i=0;i<m;i++){
            int n=v[i].size();
            for(int j=0;j<n;j++){
                cout<<v[i][j]<<" ";
            }
            cout<<endl;
        }
        return 0;

}