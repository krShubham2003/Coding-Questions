// implement DFS on onnected undirected graph represented by an adjacency list adj,

// nodes           0       1     2     3    4
// Input: adj = [[2,3,1], [0], [0,4], [0], [2]]
// Output: [0, 2, 4, 3, 1]

// APPROACH -- USING RECURSION --

// we will be given a adjacency list like adj[]--- which store neighbour nodes
// will use recursion
// will use a visited vector (vis) to check the visited nodes
// wiil use a vector answer (ans) to store ans


// IMPLEMENTATION----

// 1.. first we declare dfs function and pass value like this--
// --vector<int>dfs(int node,vector<vector<int>>& adj, vector<int>&vis, vector<int> &ans)
  // here node = starting node , adj is adj list, vis is visited array, ans store our ans

// 2.. first we will mark vis[node]=1 as marked or visited
// 3..  next step is push starting node in ans  -- ans.push_back(node);
// 4.. now we will run a auto it: adj[node] like --for(auto it : adj[node])
// 5.. and check if it is visited or not 
    //  -- if not visisted like (!vis[it])
    //   then we will call our recusrion function 
    //   and pass it,adj,vis,ans like  dfs(it,adj, vis, ans);
 
//   why we pass it is because check input node let for ex
//     node 2 ={0,4} this 0,4 is "it" first it will check for 0(it)  and ones it is colpleted and backtracked
//     then it will goes to 4(it) like that thats why we pass "it"

// 6.. we will returen our ans 

// 7.. call our main functio as --
    // vector<int> dfsOfGraph(vector<vector<int>>& adj) {
    //     // Code here
    //     vector<int>ans;
    //     int v=adj.size();
    //     vector<int>vis(v,0);
    //     return dfs(0,adj,vis,ans);
        
    // }


#include<bits/stdc++.h>
using namespace std;   
class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    
    vector<int>dfs(int node,vector<vector<int>>& adj, vector<int>&vis, vector<int> &ans )
    {
      
      vis[node]=1;
      ans.push_back(node);
      
      for(auto it : adj[node])
      {
          if(!vis[it])
          {
              dfs(it,adj, vis, ans);
          }
      }
      return ans;
            
        
    }
    vector<int> dfsOfGraph(vector<vector<int>>& adj) {
        // Code here
        vector<int>ans;
        int v=adj.size();
        vector<int>vis(v,0);
        return dfs(0,adj,vis,ans);
        
    }
};


// Time Complexity:
// O(V + E)
// V = Number of vertices in the graph
// E = Number of edges in the graph

// space complexcity 
// O(V)