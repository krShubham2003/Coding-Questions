// question--> Given two strings s and t, return true if s is a subsequence of t, or false otherwise.

// Input: s = "abc", t = "ahbgdc"
// Output: true

// for further clearification check codestorywithmik
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isSubsequence(string s, string t) {
        
       int i=0;
       int j=0;
       int m=s.size();
       int n=t.size();
       while(i<m && j<n)
       {
        if(s[i]==t[j])
        {
            i++;
        }
        j++;
       }
       if(i==m)
       {
        return true;
       }
       else{
        return false;
       }
    }
};