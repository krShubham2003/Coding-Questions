//Given a string s containing just the characters '(', ')', '{', '}', '[' and ']'
// determine if the input string is valid.

// An input string is valid if:

// 1..Open brackets must be closed by the same type of brackets.
// 2..Open brackets must be closed in the correct order.
// 3..Every close bracket has a corresponding open bracket of the same type.

// Input: s = "()[]{}"

// Output: true

// Input: s = "(]"

// Output: false

// Approach ---

 // 1... if the string has open bracket like (,{,[  then we will push it into stack

 // 2... if the string has closing bracket ),},] and stack is not empty that means
 // for closing there might be an opening bracket
 // then we will take top element and compare with current bracket, 
 // if they are opposite then move ahead(means pop)

 // 3... at last we return st.empty() which states that for every opening bracket,
        //there is a closing bracket which statisfy that it is valid parenthesis


#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
   stack<int>st;
    bool isValid(string s) {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            {
                st.push(s[i]);
            }
            else
            {
                 if(st.empty()) return false;
           
              char c=st.top();
                if(s[i]==')' && c=='(' || s[i]=='}' && c=='{' || s[i]==']' && c=='[')
                {
                    st.pop();
                }else{
                    return false;
                }
        }
        }
        return st.empty();
        
    }
};