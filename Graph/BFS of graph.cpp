// implement BFS in undirected graph 

// nodes          0        1     2     3    4
// Input: adj = [[2,3,1], [0], [0,4], [0], [2]]
// Output: [0, 2, 3, 1, 4]

// APPROACH -----

// we will be given a adjacency list like adj[]--- which store neighbour nodes
// will use Queue data structure 
// will use a visited vector (vis) to check the visited nodes
// wiil use a vector answer (ans) to store ans

// 1.. first we will push starting nodes to queue
// 2.. then we will pop the nodes from queue and push the nodes to answer
// 3.. we will run a auto it in adj[node]--
// 4.. check the nodes that we have just pushed for its neighbour and marked it as 1
//  if it is not marked as 1 
// 5.. and then push it into queue
// 6.. return ans;


#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    
    vector<int>BFS(int v, vector<vector<int>> &adj)
    {
         vector<int> vis(v, 0); // visisted vector to check visited nodes
        
        vis[0]=1;
        
        queue<int>q;
        q.push(0);
        vector<int>ans;
        
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            ans.push_back(node);
            
            for(auto it:adj[node])
            {
                if(!vis[it])
                {
                    vis[it]=1;
                    q.push(it);
                }
            }
        }
        return ans;
    }
    vector<int> bfsOfGraph(vector<vector<int>> &adj) {
        // Code here
        int v=adj.size();
        vector<int>ans;
        
       return BFS(v,adj);
       
        
        
    }
};

