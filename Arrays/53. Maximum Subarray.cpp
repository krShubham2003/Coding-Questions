// Question is like this we have to find the maximum subarray sum 
//Input: nums = [5,4,-1,7,8]
// Output: 23
// Explanation: The subarray [5,4,-1,7,8] has the largest sum 23.

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int n=nums.size();
       int ans=INT_MIN;
       int pre=0;
       int suf=0;

       // prefix
       for(int i=0;i<n;i++)
       {
        pre=pre+nums[i];
        ans=max(ans,pre);

        if(pre<=0) pre=0;
       }

       // suffix
       for(int j=n-1;j>=0;j--)
       {
        suf=suf+nums[j];
        ans=max(ans,suf);
        if(suf<=0) suf=0;
       }
       return ans;

    }
};

// concept used is prefix sum and suffix sum..