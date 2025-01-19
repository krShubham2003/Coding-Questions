// Given two strings s1 and s2. The task is to remove or insert the minimum number of
// characters from/in s1 to transform it into s2. It could be possible that the same
// character needs to be removed from one point of s1 and inserted into another point.

// Input: s1 = "heap", s2 = "pea"
// Output: 3
// Explanation: 'p' and 'h' deleted from heap. Then, 'p' is inserted at the beginning.

// approach 
// 1.. we will use longest common subsequence to find the the common character in s1 and s2
// 2.. in s1 and s2 we have common 'ea' so the number of opreation currntly is 2 , now, 
// we have to make it to s2 so another "p" we need to add to our LCS so the toata no of operation is ,
// 2+1=3,

#include<bits/stdc++.h>
using namespace std;
class Solution {

  public:
  
    int solve(int i, int j, string &s1, string &s2,vector<vector<int>>&dp)
    {
        if(i>=s1.length() || j>=s2.length()) return 0;

        if(dp[i][j]!=-1) return dp[i][j];

        if(s1[i]==s2[j]){
            return dp[i][j]=1+solve(i+1,j+1,s1,s2,dp);
        }
        return dp[i][j]=max(solve(i+1,j,s1,s2,dp),solve(i,j+1,s1,s2,dp));

    }
    int minOperations(string &s1, string &s2) {
        // Your code goes here
        int n=s1.size();
        int m=s2.size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        int lcs=solve(0,0,s1,s2,dp);

        int op1=n-lcs; // the number of opr to find to find the common in s1,
        int op2=m-lcs;//  the number of opr to find to find the common in s2,

        return op1+op2;// total number of opr 
    }
};