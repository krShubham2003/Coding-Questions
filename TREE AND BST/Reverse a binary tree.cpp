// Given the root of a binary tree, revesre the tree, and return its root.

// Input: root = [2,1,3]
// Output: [2,3,1] means left node become right and vice versa

// APPROACH ( USING SIMPLE SWAP TRADITIONALLY SWAP)


// for swap 

     // temp=a;
    //   a=b;
    //   b=temp;


// 1.. if(root==NULL) return NULL;
// 2.. invertTree(root->left);   decalred left like normal swap
// 3..  invertTree(root->right);// declared right like a normal swap
// 4..  TreeNode*temp=root->left;// declared TEMP to swap like a normal swap
// 5..  root->left=root->right; 
// 6..  root->right=temp;
// 7.. return root;// return root

#include <bits/stdc++.h>
using namespace std;

/* Definition for a binary tree node. */
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL) return NULL;
        
        invertTree(root->left);// decalred left like normal swap
        invertTree(root->right);// declared right like a normal swap

        TreeNode*temp=root->left;// declared TEMP to swap like a normal swap
        root->left=root->right;
        root->right=temp;

        return root;// return root 

    }
};