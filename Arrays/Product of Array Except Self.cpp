// Given an integer array nums, 
//return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

// You must write an algorithm that runs in O(n) time and without using the division operation.

//  Input: arr[] = [10, 3, 5, 6, 2]
// Output: [180, 600, 360, 300, 900]

// Input: nums = [-1,1,0,-3,3]
// Output: [0,0,9,0,0]

// Approach ----

// 1..we will calculate the prefix product and store it in the answer
// for(int i=0;i<n;i++)
        // {
        //    ans[i]=left;
        //    left=left*nums[i];
        // }

// 2.. then we will calculate the suffix product 
// for(int i=n-1;i>=0;i--)
        // {
        //     ans[i]=ans[i]*right;
        //     right=right*nums[i];
        // }        


#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int left=1;
        int right=1;
        int n=nums.size();
          vector<int>ans(n,1);
        for(int i=0;i<n;i++)
        {
           ans[i]=left;
           left=left*nums[i];
        }
        for(int i=n-1;i>=0;i--)
        {
            ans[i]=ans[i]*right;
            right=right*nums[i];
        }
        return ans;
    }
};        
