// implemenet breadth first search or level order search 

// Input: root = [3,9,20,null,null,15,7]
// Output: [[3],[9,20],[15,7]]


// APPPROACH USING QUEUE----

// 1.. Initialize the result container:

// vector<vector<int>> ans; → Stores the level-wise traversal result.

// 2.. Handle the edge case:

// if (root == NULL) return ans; → If the tree is empty, return an empty result.

// 3.. Initialize the queue:

// queue<TreeNode*> q; → A queue is used to process nodes level by level.
// q.push(root); → Start BFS from the root node.

// 4.. Process the queue until empty:

// while (!q.empty()) → Iterate while there are nodes to process.

// 5.. Iterate through each level:

// int n = q.size(); → Get the number of nodes at the current level.
// vector<int> level; → Temporary vector to store nodes of this level.

// 6.. Process all nodes in the current level:

// for (int i = 0; i < n; i++) → Loop through all nodes at the current level.
// TreeNode* node = q.front(); q.pop(); → Extract the front node.
// Add children to the queue (for the next level):
// if (node->left) q.push(node->left);
// if (node->right) q.push(node->right);
// Store the node value in the current level vector:
// level.push_back(node->val);

// 7.. Store the level in the result:

// ans.push_back(level); → Append the level vector to the result.

// 8.. Return the final result:

// return ans; → The 2D vector containing the level-wise traversal.


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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL) return ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int n=q.size();
            vector<int>level;
            for(int i=0;i<n;i++)
            {
                TreeNode* node=q.front();
                q.pop();

                if(node->left!=nullptr) q.push(node->left); 
                if(node->right!=nullptr) q.push(node->right);

                level.push_back(node->val);
            }
            ans.push_back(level);
        }
        return ans;

    }
};