#include<iostream>
using namespace std;
#include<string>
#include<vector>

vector<vector<int>> subset(vector<int>&orignal,vector<vector<int>>&ans, int i,vector<int>temp){
    if(i==orignal.size()){
        ans.push_back(temp);
        return ans;

    } 
    int num=orignal[i];
    subset(orignal,ans,i+1,temp);
    temp.push_back(num);
    subset(orignal,ans,i+1,temp);
    return ans;
   
}



int main(){
    
    vector<int>orignal={1,2};
    vector<vector<int>>ans;
    vector<int>temp;
    subset(orignal,ans,0,temp);
    for(int i=0;i<ans.size();i++){
        for (int j = 0; j < ans[i].size(); j++) {
        cout << ans[i][j] << " ";
    }
    cout << endl;
    }
    return 0;
}
