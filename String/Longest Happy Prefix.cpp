// A string is called a happy prefix if is a non-empty prefix which is also a suffix (excluding itself).
//Given a string s, return the longest happy prefix of s. Return an empty string "" if no such prefix exists.

// Input: s = "ababab"
// Output: "abab"
// Explanation: "abab" is the largest prefix which is also suffix. They can overlap in the original string.

// approach we use longest prefix and suffix concept and return the su string 

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string longestPrefix(string s) {
        int n=s.length();
        vector<int>v(n,0);
        int a=0;
        int i=1;
        while(i<n)
        {
            if(s[i]==s[a])
            {
                a=a+1;
                v[i]=a;
               // ans.push_back(a);
                i++;
            }
            else{
                if(a!=0)
                {
                    a=v[a-1];
                }else{
                    v[i]=0;
                    i++;
                }
            }
        }
        return s.substr(0,v[n-1]);
    }
};