// search a key in binary search tree and return the root node 

// Input: root = [4,2,7,1,3], val = 2
// Output: [2,1,3]  returning the root node 
// TC-- 0(LOG N)

// APPROACH ----- 

// BINARY SEARCH TREE HAS FOLLOOWING PROPERTY--

// a.. left node should be less than its root node 
// b.. right node should be greater then its root node 

// 1.. if root == null return null 
// 2.. if key < root->left --(serach in left part)
        // return searchBST(root->left,val);

// 3.. if key > root->right search in right part
       // return  searchBST(root->right,val);

// 4.. if val == root rerturn the root       



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
    TreeNode* searchBST(TreeNode* root, int val) {

    if(root==NULL) return NULL;

    if(val < root->val)
    {
       return  searchBST(root->left,val);
    }
    else if(val > root->val)
    {
       return  searchBST(root->right,val);
    }
    else{
        return root;
    }
        
    }
};