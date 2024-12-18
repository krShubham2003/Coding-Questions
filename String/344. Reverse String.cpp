// quetsion is to Write a function that reverses a string. The input string is given as an array of characters s.
//
//Input: s = ["h","e","l","l","o"]
//Output: ["o","l","l","e","h"]

// approach --> use a inbuilt reverse function
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void reverseString(vector<char>& s) {
        reverse(s.begin(),s.end());
    }
};