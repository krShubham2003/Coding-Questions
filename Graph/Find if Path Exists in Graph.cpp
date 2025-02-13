// There is a bi-directional graph with n vertices, 
// The edges in the graph are represented as a 2D integer array edges edges[i] = [ui, vi]
// You want to determine 
//if there is a valid path that exists from vertex source to vertex destination.


// Input: n = 3, edges = [[0,1],[1,2],[2,0]], source = 0, destination = 2
// Output: true

// Input: n = 6, edges = [[0,1],[0,2],[3,5],[5,4],[4,3]], source = 0, destination = 5
// Output: false

//  APPROACH -- USING DFS

// 1.. we will define DFS function and pass the value node,adj list, destination vis[]
// we will not pass source bcoz we have pass node it will work as source (initial)
// like --bool dfs(int node, vector<vector<int>>& adj, int destination,vector<int>&vis)

// 2.. if node== destination return true;

// 3.. vis[node]=true we will set true as initial node as source

// 4..  for(auto it:adj[node])
        // {
        //     if(!vis[it])
        //     {
        //         if(dfs(it,adj,destination,vis)==true)
        //         {
        //             return true;
        //         }
        //     }
        // }
        // return false;
    // we will run a auto it in adj[node] (adj[node] means node neighnours)    
    // if node it is not visistd like (!vis[it])
    // and if DFS function like if(dfs(it,adj,destination,vis)==true) means we have find the 
    // destination simply we return true 

    // else we will return false;

// 5.. in the main function we will create a adj list bcoz we have given input as matrix 
//         so we will change  it to adj list for our convenience 

// vector<vector<int>> adj(n);
//         for(auto edge : edges) {
//             adj[edge[0]].push_back(edge[1]);
//             adj[edge[1]].push_back(edge[0]); // Since the graph is bi-directional
            
//         }

// 6.. decalre visited array as vector<int>vis(n,0);

// 7..  return dfs(source,adj,destination,vis); call the dfs function in main function




#include<bits/stdc++.h>
using namespace std; 
class Solution {
public:
    bool dfs(int node, vector<vector<int>>& adj, int destination,vector<int>&vis)
    {
        if(node==destination) return true;
        vis[node]=true;

        for(auto it:adj[node])
        {
            if(!vis[it])
            {
                if(dfs(it,adj,destination,vis)==true)
                {
                    return true;
                }
            }
        }
        return false;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> adj(n);
        for(auto edge : edges) {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]); // Since the graph is bi-directional
            
        }

        vector<int>vis(n,0);

        return dfs(source,adj,destination,vis);
    }
};