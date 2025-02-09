// Given the root of a binary tree, return its maximum depth.
// tc -- 0(n) and sc--0(n) where n is the depth of tree.

// Input: root = [3,9,20,null,null,15,7]
// Output: 3

//         3
//        / \
//       9   20
//          /  \
//         15   7


// APPROACH ( USING RECURSION AND BACKTRACKING)

// 1.. if(root==NULL) return 0;
// 2.. int left=maxDepth(root->left);
// 3.. int right=maxDepth(root->right);

// 4..  return 1+max(left,right);



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

// maximum depth of a binary tree-----using rescusion and backtracking
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL) return 0;

        int left=maxDepth(root->left); // left node
        int right=maxDepth(root->right);// rifght node

        return 1+max(left,right);
    }
};