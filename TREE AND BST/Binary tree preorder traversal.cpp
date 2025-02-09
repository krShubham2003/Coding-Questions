// Given the root of a binary tree, return the preorder traversal of its nodes' values.

// --- pre-order(root,left,right) formula---

// Input: root = [1,2,3,4,5,null,8,null,null,6,7,9]

// Output: [1,2,4,5,6,7,3,8,9]


// APPROACH---- 

// 1.. if root==null return null
// 2.. res.push_back(root->val)
// 3.. preorder(root->left,res)
// 4.. preorder(root->right,res)  where res is vector to store the answer




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
    
    void preorder(TreeNode* root,vector<int>&res)
    {
        if(root==nullptr) return;

        res.push_back(root->val);

        preorder(root->left,res);
        preorder(root->right,res);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>res;
        preorder(root,res);
        return res;
    }
};
