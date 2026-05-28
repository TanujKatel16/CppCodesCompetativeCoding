
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
        if(a->next==NULL) return 0;   
        int left_levels=total_levels(a->left);
        int right_levels=total_levels(a->right);
        return 1+left_levels+right_levels;
    }


    int main(){

    }
