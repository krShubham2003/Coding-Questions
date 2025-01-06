// Given a string s consisting of words and spaces, return the length of the last word in the string.

// Input: s = "Hello World"
//Output: 5

// Input: s = "   fly me   to   the moon  "
//Output: 4

//approach ---> 

// 1...pehle string ko reverse kr diye hai phir 
// 2..  ek normal loop chala ke length++ kr diye 


#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
       int length=0;
       int n=s.size();
       reverse(s.begin(),s.end());
        for(size_t i=0;i<n;i++)
        {
            if(s[i]!=' ')
            {
               length++;
            }
            else{
                if(length>0 )
                {
                    break;
                }
            }
        }
        return length;
    }     
};