// You are given a sorted array consisting of only integers 
// where every element appears exactly twice, 
// except for one element which appears exactly once.

// Return the single element that appears only once.

// Your solution must run in O(log n) time and O(1) space.

// Input 1 : nums = [3,3,7,7,10,11,11]
// Output: 10 

// Input 2 :
// nums = [1, 1, 2, 2, 3, 4, 4, 5, 5]
// Output: 3

// ***** Approoach is -----
// 1....

// *****(when the mid == mid+1 then)
//   **case a...   if the size of array after mid is even
//         if even then if(nums[mid]==nums[mid+1])
//             {
//                 if(isEven)
//                 {
//                     left=mid+2; --> check exampple 2 for better understanding
//  **case b...       }else
//                     right=mid-1;
//                 }
//             } 

// 2......

    // ***(when the mid!=mid+1)

    //      same we will check size 
    // **case a.... if size is even 
    //    if(isEven)
    //             {
    //                 right=mid;
    // **case b..          }else{   ----> if size is odd
    //                 left=mid+1;
                


#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int left=0;
        int right=n-1;

        while(left<right)
        {
            int mid=(left+right)/2;
            // to check whether the size is even or odd--
            bool isEven;
            {
                if((right-mid)%2==0)
                {
                    
                    isEven = true;
                }else{
                    isEven = false;
                }
            }
            // case 1..
            if(nums[mid]==nums[mid+1])
            {
                if(isEven)
                {
                    left=mid+2;
                }else{
                    right=mid-1;
                }
            }
            // case 2..
            else{  // when mid!=mid+1
                if(isEven)
                {
                    right=mid;
                }else{
                    left=mid+1;
                }
            }
        }
        return nums[left];
    }
};