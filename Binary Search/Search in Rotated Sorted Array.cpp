// Given a sorted and rotated array arr[] of distinct elements, the task is to find the index of a target key. Return -1 if the key is not found.

// Input: arr[] = [5, 6, 7, 8, 9, 10, 1, 2, 3], key = 3
// Output: 8
// Explanation: 3 is found at index 8.

// approach...
// 1.. first we will find the minimum element in this rotated array using find minimum element in sorted array concept
// 2.. then we will search in firat half of array (ex from 0 th index to 5 th index considering above example).
// 3.. then we will search the remaining half of array.

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
// function to find the minimum element index 
    int pivot(vector<int>&nums, int n)
    {
        int left=0, right=n-1;
        while(left<right)
        {
            int mid=(left+right)/2;

            if(nums[mid]>nums[right])
            {
                left=mid+1;
            }
            else{
                right=mid;
            }
        }
        return right;
    }
// function for binary search 
    int search(int left, int right, vector<int>&nums, int target)
    {
        while(left<=right)
        {
            int mid=(left+right)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]<target)
            {
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
    int n=nums.size();

    int pivot_idx=pivot(nums,n);
    int idx=search(0,pivot_idx-1,nums,target);// find the element in first half of array 

    if(idx==-1)
    {
    idx=search(pivot_idx,n-1,nums,target);// find the element in second half of array 
    }
    return idx;
    }
};
