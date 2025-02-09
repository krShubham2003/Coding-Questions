// Given the root of a binary tree, return the postorder traversal of its nodes' values.

//  ---> post-order traversal (left,right,root) formula

// Input: root = [1,2,3,4,5,null,8,null,null,6,7,9]

// Output: [4,6,7,5,2,9,8,3,1]


// APPROACH---- 

// 1.. if root==null return null
// 2.. postorder(root->left,res)
// 3.. postorder(root->right,res)
// 4.. res.push_back(root->val)  where res is vector to store the answer


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

    void postorder(TreeNode* root,vector<int>&res)
    {
        if(root==nullptr) return ;

        
        postorder(root->left,res);
        postorder(root->right,res);
        res.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>res;
        postorder(root,res);
        return res;
    }
};