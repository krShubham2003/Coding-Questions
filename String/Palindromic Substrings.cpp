// Given a string s, return the number of palindromic substrings in it.

// Example 1:

// Input: s = "abc"
// Output: 3
// Explanation: Three palindromic strings: "a", "b", "c".
// Example 2:

// Input: s = "aaa"
// Output: 6
// Explanation: Six palindromic strings: "a", "a", "a", "aa", "aa", "aaa".

// aproach write the code for isPalindrome then check the number 

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool ispalindrome(int i, int j, string s)
    {
        //int n=s.length();
        
        while(i<j)
        {
            if(s[i]!=s[j])
            {
                return false;
            }
            else{
                i++;
                j--;
            }
        }
        return true;
    }
    int countSubstrings(string s) {
        int count=0;
         int n=s.length();
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                if(ispalindrome(i,j,s)==true)
                {
                    count++;
                }
            }
        }
        return count;
    }
};