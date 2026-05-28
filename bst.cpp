#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void print(TreeNode* root){

    stack<TreeNode*>s;
    s.push(root);

    while(s.size()>0){

        TreeNode* temp=s.top();
        cout<<temp->val<<" ";
        s.pop();
        if(temp->right) s.push(temp->right);
        if(temp->left) s.push(temp->left);


    }
    
}

   void help(TreeNode* root,int sum){
        
        if(root==NULL) return;

        help(root->right,sum+root->val);
        root->val=sum+root->val;
        help(root->left,sum+root->val);

    }


int main() {
    TreeNode* a = new TreeNode(1);
    TreeNode* b = new TreeNode(2);
    TreeNode* c = new TreeNode(3);
    TreeNode* d = new TreeNode(4);
    TreeNode* e = new TreeNode(5);
    TreeNode* f = new TreeNode(6);
    TreeNode* g = new TreeNode(7);
    TreeNode* h = new TreeNode(8);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    d->right = h;

    print(a);
    cout<<endl;
    int sum=0;
    help(a,sum);
    print(a);



    return 0;
}
