// write a code for in-order traversal in a binary tree.

// ---> in-order traversal (left,root,right) formula

// Input: root = [1,2,3,4,5,null,8,null,null,6,7,9]

// Output: [4,2,6,5,7,1,3,9,8]


// APPROACH---- 

// 1.. if root==null return null
// 2.. inorder(root->left,res)
// 3..res.push_back(root->val)
// 4.. inorder(root->right,res)  where res is vector to store the answer





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

// inorder traversal code ------
    void inorder(TreeNode* root, vector<int>& res) {
        if (root == nullptr) return;

        inorder(root->left, res);
        res.push_back(root->val);
        inorder(root->right, res);
    }

// main function------
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        inorder(root, res);
        return res;
    }
};



