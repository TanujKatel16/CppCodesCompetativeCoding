#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// void level_print(TreeNode* head, int curr, int level) {
//     if (head == NULL) return;

//     if (curr == level) {
//         cout << head->val << " ";
//         return;
//     }

//     level_print(head->left, curr + 1, level);
//     level_print(head->right, curr + 1, level);
// }

// int no_of_levels(TreeNode* root){
//     if(root==NULL) return 0;
//     return 1+max(no_of_levels(root->left),no_of_levels(root->right));
// }

// void print(TreeNode* root){
//     int n=no_of_levels(root);
//     for(int i=1;i<=n;i++){
//         level_print(root,1,i);
//         cout<<endl;
//     }

// }
    int left_sum(TreeNode* root,int sum){
        if(root==NULL) return sum;
        cout<<sum<<" ";
        sum=sum+root->val;
        left_sum(root->left,sum);
    }
     int right_sum(TreeNode* root,int sum){
        if(root==NULL) return sum;
        right_sum(root->right,sum+(root->val));
    }
    //  int maxPathSum(TreeNode* root) {
    //     if(root==NULL) return 0;

    //     int left=left_sum(root,0);
    //     int right=right_sum(root,0);
    //     int total=left+right+root->val;
    //     int maxi=max(total,max(right,left));
    //     return max(maxi,max(maxPathSum(root->left),maxPathSum(root->right)));
        
    // }

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
    cout<<left_sum(a,0)<<" ";
    // cout<<right_sum(a,0)<<" ";
    // cout<<maxPathSum(a);

    // print(a);

    return 0;
}
