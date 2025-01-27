//Given an array of integers nums sorted in non-decreasing order,
//find the starting and ending position of a given target value.

//If target is not found in the array, return [-1, -1].

//You must write an algorithm with O(log n) runtime complexity.

// Input: nums = [5,7,7,8,8,10], target = 8
// Output: [3,4]

// Input: nums = [], target = 0
// Output: [-1,-1]

// Input: nums = [2,2,2,2,2,2], target = 8
// Output: [0,5]

// approach ------
//1.. we will find in the two half (left half and right half)
// we will initialsie  int left_most=-1; and  int right_most=-1;

// 2.. for left half

// int findLeft(vector<int>& nums, int target,int n)
//     {
//         int l=0;
//         int r=n-1;
//         int left_most=-1;
//         while(l<=r)
//         {
//             int mid=(l+r)/2;
//             if(nums[mid]==target)
//             {
//                 left_most=mid; // we will update left_most=mid and further we ill check wherther we will get any further most element in left half
//                 r=mid-1;
//             }else if(nums[mid]>target)
//             {
//                 r=mid-1;
//             }
//             else{
//                 l=mid+1;
//             }
//         }
//         return left_most;
//     }

// 3.. for right_half

// same logic as left half

// int findRight(vector<int>& nums, int target,int n)
//     {
//         int l=0;
//         int r=n-1;
//        int right_most=-1;
//         while(l<=r)
//         {
//             int mid=(l+r)/2;
//             if(nums[mid]==target)
//             {
//                 right_most=mid;
//                 l=mid+1;
//             }else if(nums[mid]>target)
//             {
//                 r=mid-1;
//             }
//             else{
//                 l=mid+1;
//             }
//         }
//         return right_most;
//     }

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findLeft(vector<int>& nums, int target,int n)
    {
        int l=0;
        int r=n-1;
        int left_most=-1;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(nums[mid]==target)
            {
                left_most=mid;
                r=mid-1;
            }else if(nums[mid]>target)
            {
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return left_most;
    }

    int findRight(vector<int>& nums, int target,int n)
    {
        int l=0;
        int r=n-1;
       int right_most=-1;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(nums[mid]==target)
            {
                right_most=mid;
                l=mid+1;
            }else if(nums[mid]>target)
            {
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return right_most;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
      int n=nums.size();

      int left_most=findLeft(nums,target,n);
      int right_most=findRight(nums,target,n);

      return {left_most,right_most};
    }
};