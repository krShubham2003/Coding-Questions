// Given two strings s and t, determine if they are isomorphic.

//Two strings s and t are isomorphic if the characters in s can be replaced to get t.

// Input: s = "egg", t = "add"
//Output: true

// Input: s = "foo", t = "bar"
//Output: false

// logic is same as word pattern question-->
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isIsomorphic(string s, string t) {
     int n=s.length();
     int m=t.length();
     unordered_map<char,char>mp;
     set<char>st;
     if(n!=m) return false;
     for(int i=0;i<n;i++)
     {
        char chs=s[i];
        char cht=t[i];

        if(mp.find(chs)==mp.end() && st.find(cht)==st.end())
        {
            st.insert(cht);
            mp[chs]=cht;
        }
      else if (mp[chs] != cht)
        {
            return false;
        }
     }
     return true;
    }
};