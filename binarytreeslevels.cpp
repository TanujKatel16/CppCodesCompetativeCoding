
#include<bits/stdc++.h>
using namespace std;


    struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
    };
    int total_levels(TreeNode* a){    
        if(a==NULL) return 0;   
        int left_levels=total_levels(a->left);
        int right_levels=total_levels(a->right);
        return  1+max(left_levels,right_levels);    
    }

    void display(TreeNode* head,int &curr,int level){
        if(head==NULL) return;
        if(level==curr){
            cout<<head->val<<" ";
            return;
        }
        display(head->left, curr+1,level);
        display(head->right,curr+1,level);

    }

    int main(){

        TreeNode* a=new TreeNode(1);
        TreeNode* b=new TreeNode(2);
        TreeNode* c=new TreeNode(3);
        TreeNode* d=new TreeNode(4);
        TreeNode* e=new TreeNode(5);
        TreeNode* f=new TreeNode(6);
        TreeNode* g=new TreeNode(7);
        TreeNode* h=new TreeNode(8);

        a->left=b;
        a->right=c;
        b->left=d;
        b->right=e;
        c->left=f;
        c->right=g;
        d->right=h;
        display(a,1,3);
        cout<<endl;

    }