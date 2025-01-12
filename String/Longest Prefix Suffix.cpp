// Given a string of characters s, find the length of the longest prefix which is also a suffix.
//Note: Prefix and suffix can be overlapping but they should not be equal to the entire string.

// Input: s = "abab"
// Output: 2
// Explanation: "ab" is the longest prefix and suffix. 

// Input: s = "aabcdaabc"
// Output: 4
// Explanation: The string "aabc" is the longest prefix and suffix.

// approach use the longest prefix algo give in code 

#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int longestPrefixSuffix(string &s) {
        // Your code goes here
        int n=s.length();
        vector<int>v(n,0);
        int ans=0;
        
        int i=1;
        while(i<n)
        {
            if(s[i]==s[ans])
            {
               
                ans=ans+1;
                v[i]=ans;
                i++;
            }
            else{
                if(ans!=0)
                {
                    ans=v[ans-1];
                }else{
                    v[i]=0;
                    i++;
                }
            }
        }
        return ans;
    }
};