// question
// Given two strings S1 and S2 as input, the task is to merge them alternatively i.e. the first character of S1 then the first character of S2 and so on till the strings end.
//NOTE: Add the whole string if other string is empty.

// example S1 = "Hello" S2 = "Bye"
// output  HBeylelo

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
       string ans="";
       int i=0;
       while(i<word1.length() || i<word2.length())
       {
        if(i<word1.length())
        {
            ans=ans+word1[i];
        }
        if(i<word2.length())
        {
            ans=ans+word2[i];
        }
        i++;
       }
       return ans;

    }
};