#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode* tree_cons(int arr[],int num){
    queue<TreeNode*>q;
    TreeNode* root= new TreeNode(arr[0]);
    q.push(root);
    int i=1;
    int j=2;


    while(!q.empty() && i<num){

        TreeNode* temp=q.front();
        q.pop(); 

        TreeNode* a= new TreeNode(arr[i]);
        TreeNode* b= new TreeNode(arr[j]);

        if(i<num && arr[i]!=INT_MIN) temp->left=a;
        else temp->left=NULL;
        if(j<num && arr[j]!=INT_MIN) temp->right=b;
        else temp->right=NULL;

        if(arr[i]!=INT_MIN) q.push(a);
        if(arr[j]!=INT_MIN) q.push(b);


        i=i+2;
        j=j+2;

    }

    return root;

}

void print(TreeNode* root){

    queue<TreeNode*>q;
    q.push(root);

    while(q.size()>0){
        TreeNode* temp=q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left) q.push(temp->left);
        if(temp->right)q.push(temp->right);
    }

}

void dfs(TreeNode* root){
    if(root==NULL)  return;
    cout<<root->val<<" ";
    dfs(root->left);
    dfs(root->right);
}




int main(){
    int arr[]={1,2,3,INT_MIN,5,6,7,8};
    int num=sizeof(arr)/sizeof(arr[0]);
    TreeNode* root=tree_cons(arr,num);   
    print(root); 
    cout<<endl;
    dfs(root); 
    return 0;  
}