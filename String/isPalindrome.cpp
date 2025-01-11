// check wheteher Given an integer x, return true if x is a palindrome else false

// Input: x = 121
//Output: true

//Input: x = 10
//Output: false

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
     string s= to_string(x);
    int n=s.size();
    int i=0;
    int j=n-1;
    while(i<=j)
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
};