// Given an integer array nums, find a subarray  that has the largest product, and return the product.

// Input: nums = [2,3,-2,4]
// Output: 6
// Explanation: [2,3] has the largest product 6.

// Input: nums = [-2,0,-1]
// Output: 0
// Explanation: The result cannot be 2, because [-2,-1] is not a subarray.


// Apprach ---

// same aapproach using prefix and suffix sum to find the maximum subarray sum 

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans=INT_MIN;
        int pre=1;
        int suf=1;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            pre=pre*nums[i];
            ans=max(ans,pre);
            if(pre==0) pre=1;
        }
        for(int j=n-1;j>=0;j--)
        {
            suf=suf*nums[j];
            ans=max(ans,suf);
            if(suf==0) suf=1;
        }
        return ans;
    }
};