// check for the valid binary search tree--

// check striver lecture for this video -- 

// ---> A valid binary search tree is that tree --
//   a.. whose all the elements in left subtree is less than root
//   b.. whose all the elements in right subtree is greater than root


// Input: root = [2,1,3]
// Output: true

// Input: root = [5,1,4,null,null,3,6]
// Output: false


//****Intuition Behind the Code

//    A Binary Search Tree (BST) follows these properties:

//    Left subtree contains values less than the root.
//    Right subtree contains values greater than the root.
//    Both left and right subtrees must also be BSTs.


// *** The approach uses recursion with range validation:

// 1.. Each node’s value must lie within a valid range (minVal, maxVal).
// 2.. The left child must be within (minVal, root->val).
// 3.. The right child must be within (root->val, maxVal).
// 4.. If any node violates the BST condition, return false.

// example --

// ************** VERY IMP TO UNDERSTAND THIS ------
//       5
//      / \
//     3   7
//    / \   \
//   2   4   8
// Start at 5, range (-∞, ∞).
// Move to 3, range (-∞, 5).   --> return left (3,minVal,root val) here 3(root->left), minVal, 5(root->val)
// Move to 2, range (-∞, 3). ✅ Valid.
// Move to 4, range (3, 5). ✅ Valid.
// Move to 7, range (5, ∞).   ---> return right(7,5,maxVal) here 7 (root->right), 5(root->val), maxVal
// Move to 8, range (7, ∞). ✅ 



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
    
    bool BST(TreeNode* root,long minVal,long maxVal)
    {
        if(root==NULL) return true;

        if(root->val >= maxVal || root->val <= minVal) return false;// doesnot obey BST property

        else{ // cheeck this reture care fully 
            return BST(root->left,minVal,root->val) && BST(root->right,root->val,maxVal);
        }
    }
    bool isValidBST(TreeNode* root) {
        return BST(root,LONG_MIN,LONG_MAX);
    }
};