// Problem Understanding:
// We need to remove duplicates from a sorted array such that each unique element appears at most twice while maintaining the relative order. The key constraints are:

// Do this in-place, meaning no extra space can be used apart from modifying the input array.
// Return the length (k) of the new array with valid elements.
// Since the array is sorted, duplicates appear consecutively, making it easy to identify and manage them.


#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if (n <= 2) return n; // No need to process small arrays
        
        int i = 1; // 'i' tracks the last valid position for writing
        for (int j = 2; j < n; j++) { // Start checking from the third element
            if (nums[j] != nums[i - 1]) { 
                nums[i + 1] = nums[j]; // Write current valid element at 'i + 1'
                i++; // Move 'i' to the next valid position
            }
        }
        return i + 1; // 'i' points to the last valid index, so return 'i + 1' as length
    }
};



//1..why starts with j=2 because 
//..The first two elements are always valid (since each element can appear at least twice).
//..Starting from j = 2 focuses on processing the remaining elements efficiently.


//2..Comparison with nums[i - 1]:
//..nums[j] is compared with nums[i - 1] (the element two places behind the write pointer).
//..This ensures that nums[j] is only added if it is not already part of the "two allowed occurrences."
