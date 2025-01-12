// Given a string S return the longest palindromic substring.

//Input: s = "babad"
// Output: "bab"
// Explanation: "aba" is also a valid answer.

// aproach first we will write a function to check for plaindrome.
// then we run the 2 for loop to find the maximum length.

// TC--> O(N^3) 

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
     bool ispalindrome(int i,int j, string &s)
     {
       

        while(i<=j)
        {
            if(s[i]!=s[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
     }
    
    string longestPalindrome(string s) {
        int sp=0;
        int len=INT_MIN;
        for(int i=0;i<s.size();i++)
        {
            for(int j=i;j<s.size();j++)
            {
            if(ispalindrome(i,j,s)==true)
            {
                if(j-i+1>len)
                {
                    len=j-i+1;
                    sp=i;
                }
            }
            }
        }
        return s.substr(sp,len);
    }
};