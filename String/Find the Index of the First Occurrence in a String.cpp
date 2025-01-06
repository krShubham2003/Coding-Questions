// Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

//Input: haystack = "sadbutsad", needle = "sad"
//Output: 0
//Explanation: "sad" occurs at index 0 and 6.
//The first occurrence is at index 0, so we return 0.

//Input: haystack: "mississippi" needle: "issip"
//output: 1



#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.size();
        int m=needle.size();
        int i=0;
        int j=0;
        if(m<=0) return -1;
        while(i<n && j<m)
        {
            if(needle[j]==haystack[i])
            {
                i++;
                j++;
            }
            else{
               
                i=i-j+1;// if doesnot matches then set i=i-j+1
                j=0;// set j=0;
            }

            if(j==m)
            {
                return i-j;// return the index 
            }
        }
        return -1;
    }
};