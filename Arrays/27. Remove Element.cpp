// bascically question ye bol raha hai ki val ka jitna bhi occurence hai array me usko remove krke new array jo banega after removing all the occurence of val uska size return krna hai
// ex Input: nums = [3,2,2,3], val = 3
//Output: 2, nums = [2,2,_,_]

// question is .. Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.

//Consider the number of elements in nums which are not equal to val be k, to get accepted, you need to do the following things:

//Change the array nums such that the first k elements of nums contain the elements which are not equal to val. The remaining elements of nums are not important as well as the size of nums.
//Return k.


// concept same hai jo hum move zero to end wala question me use krte hai 

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int i=0;
        for(int j=0;j<n;j++)
        {
            if(nums[j]!=val)
            {
                swap(nums[i],nums[j]);
                i++;
            }
        }
        return i;
    }
};