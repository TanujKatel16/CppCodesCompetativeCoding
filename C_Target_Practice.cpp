#include<iostream>
using namespace std;
#include<vector>

int main(){
    int t;
    cin>>t;
    int v[10][10];
    while(t--){ 
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){       
                char temp;
                cin>>temp;
                v[i][j]=temp; 
            }
        }

        int count=0;
        int ans[10][10]={{1,1,1,1,1,1,1,1,1,1},
                         {1,2,2,2,2,2,2,2,2,1},
                         {1,2,3,3,3,3,3,3,2,1},
                         {1,2,3,4,4,4,4,3,2,1},
                         {1,2,3,4,5,5,4,3,2,1},
                         {1,2,3,4,5,5,4,3,2,1},
                         {1,2,3,4,4,4,4,3,2,1},
                         {1,2,3,3,3,3,3,3,2,1},
                         {1,2,2,2,2,2,2,2,2,1},
                         {1,1,1,1,1,1,1,1,1,1}};

        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){       
               if(v[i][j]=='X'){
                count+=ans[i][j];
               } 
            }
        }
        cout<<count<<endl;
                   
       
    }
    return 0;
}
