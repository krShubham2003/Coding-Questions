// actually it is a 3 step process
// 1.. reverse all the array
// 2.. reverse first k elements
// 3.. reverse remaining elements 

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
      int n=nums.size();
      k=k%n;

      reverse(nums.begin(),nums.end());
      reverse(nums.begin(),nums.begin()+k);
      reverse(nums.begin()+k,nums.end());
    }
};