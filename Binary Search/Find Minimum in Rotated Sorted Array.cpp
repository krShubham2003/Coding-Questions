// Given the sorted rotated array nums of unique elements, return the minimum element of this array.

// Input: nums = [3,4,5,1,2]
// Output: 1
// Explanation: The original array was [1,2,3,4,5] rotated 3 times.

// Approach ---
// 1...since the array is sorted the mid is always less than the right 
// 2...

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    
    int solve(vector<int>&nums, int l, int r )
    {
       int mid; 
       while(l<r)
       {
         mid=(l+r)/2;

         if(nums[mid]>nums[r])
         {
            l=mid+1;// alwys the mid will be less than right
         }
         else{
            r=mid;// may be it will be possible that mid element will be the minimum thats why 
         }
         
       }
       
       return nums[l];// // since left will be the minimum elemet thats why we return left
    }
    int findMin(vector<int>& nums) {
        int n=nums.size();
        return solve(nums,0,n-1);
    }
};