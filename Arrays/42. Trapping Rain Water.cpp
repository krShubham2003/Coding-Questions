// question ye hai ki Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.

// Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
// Output: 6

// Input: height = [4,2,0,3,2,5]
// Output: 9

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int ans=0;

        // for left_max and right_max
        vector<int>left_max(n,0);
        vector<int>right_max(n,0);
        
        left_max[0]=height[0];
        right_max[n-1]=height[n-1];
        for(int i=1;i<n;i++)
        {
            left_max[i]=max(left_max[i-1],height[i]);
        }
        for(int j=n-2;j>=0;j--)
        {
            right_max[j]=max(right_max[j+1],height[j]);
        }
        // after finding the left and right max vector 
        // ab hum traverse krenge each element me aur uske corresponding left aur right check krenge
        // and then calculate kr lenge
        for(int k=0;k<n;k++)
        {
            ans=ans+min(left_max[k],right_max[k])-height[k];
        }
         return ans;
    }
  
};

// approach-----
// approach ye hai ki hum each element ko raverse krenge aur uss elemnt ka left_max and right_max nikalenge
//ek ans variable rakhenge
// ans=min(left-max,right_max)-arr[i];

// left_max and right_max ke liye hum vector lenge dono ke liye aur left_max and right_max dalenge
//  
