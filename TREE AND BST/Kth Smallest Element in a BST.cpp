// find the Kth smallest element in BST.

// Input: root = [5,3,6,2,4,null,null,1], k = 3
// Output: 3

// Approach -- same as find minimum element in BST 

// use inorder traversal 


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
    void inorder(TreeNode* root,vector<int>&res)
    {
        if(root==NULL) return;
        inorder(root->left,res);
        res.push_back(root->val);
        inorder(root->right,res);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int>res;
        inorder(root,res);
        return res[k-1];
    }
};