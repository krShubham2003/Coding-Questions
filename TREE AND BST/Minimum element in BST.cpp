// Given the root of a Binary Search Tree. 
//The task is to find the minimum valued element in this given BST.

// Input: root = [5, 4, 6, 3, N, N, 7, 1]

// Output: 1  -- 1 is the smallest element in BST.

// Approach ----

// we will use INORDER traversal and return the smallest elenment.


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
    int minValue(TreeNode* root) {
        // Code here
        vector<int>res;
        inorder(root,res);
        return res[0];
    }
};