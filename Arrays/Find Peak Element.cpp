// A peak element is an element that is strictly greater than its neighbors.

//Input: nums = [1,2,3,1]
//Output: 2
//Explanation: 3 is a peak element and your function should return the index number 2.

// approach use binary search and when the left cross right or vice versa,
// return either right or left.

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        int left=0;
        int right=n-1;
        int mid;
        while(left<right)
        {
            int mid=(left+right)/2;

            if(nums[mid]<nums[mid+1])
            {
                left=mid+1;
            }
            else{
                right=mid;
            }
            
        }
        return right;
    }
};