// Given a number N find whether its a happy number or not. 
// A number is called happy if it leads to 1 after a sequence of steps wherein each step,
// the number is replaced by the sum of squares of its digit that is if we start with
// Happy Number and keep replacing it with digits square sum, we reach 1.

// Input: 
// N = 19
// Output: 
// 1
// Explanation:
// 19 is a Happy Number,
// 1^2 + 9^2 = 82
// 8^2 + 2^2 = 68
// 6^2 + 8^2 = 100
// 1^2 + 0^2 + 0^2 = 1
// As we reached to 1, 
// 19 is a Happy Number.

// Input:
// N = 20
// Output: 
// 0
// Explanation: 
// We can never reach to 1  we will stuck in cyclic loop the number will be repeat
// by repeating the mentioned
// steps.

// approach 

// 1.. we will use recursion for checking 
//2.. we will also use set to check whetehr the numebr is present in set if ,
// the number is present in the set that means we are stuck in cylic loop we will return false,
// else if the number is not present we will insert the number to set and continue our recursion 

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:

   bool solve(int n) {
    int sum = 0;
    unordered_set<int>s;
    if(n==1) return true;
    while (n != 1) {
        sum = 0; 
        while (n > 0) {
            int digit = n % 10;
            sum = sum + digit * digit;
            n = n / 10;
        }
       if (sum == 1) return true; 
       if (s.find(sum) != s.end()) return false;
       s.insert(sum);
       n = sum; 
    }
    return false; 
}
    bool isHappy(int n) {
        return solve(n);
    }
};