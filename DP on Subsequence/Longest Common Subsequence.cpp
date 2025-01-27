// Given two strings text1 and text2, return the length of their longest common subsequence. If there is no common subsequence, return 0.

// For example, "ace" is a subsequence of "abcde".

// A common subsequence of two strings is a subsequence that is common to both strings.

// Example 1:

// Input: text1 = "abcde", text2 = "ace" 
// Output: 3  
// Explanation: The longest common subsequence is "ace" and its length is 3.

// approach is first use recursion and then simply memo it , this is code of memo 


// intitution is ---->

// int solve(int i, int j, string s1,string s2,)
// {
//     if(i>=s1.length() || j>=s2.length()) return 0;
//      if(s1[i]==s2[j])
//      {
//         return 1+solve(i+1,j+1,s1,s2);// 1+ isluye kyuki usko hum apne ans me add kie kyuki humko ek length answer mila 
//      }
//      return max(solve(i+1,j,s1,s2),solve(i,j+1,s1,s2));
// }

// ---> call this solve function in the main function 

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    
    int solve(int i, int j, string &text1, string &text2,vector<vector<int>>&dp)
    {
        if(i>=text1.length() || j>=text2.length()) return 0;
        if(dp[i][j]!=-1) return dp[i][j];

        if(text1[i]==text2[j])
        {
            return dp[i][j]=1+solve(i+1,j+1,text1,text2,dp);
        }

        return dp[i][j]=max(solve(i+1,j,text1,text2,dp),solve(i,j+1,text1,text2,dp));
    }

    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.length();
        int m=text2.length();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return solve(0,0,text1,text2,dp);
    }
};

