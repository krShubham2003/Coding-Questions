// question basically ye bol raha hai ki pivot se sara chota element left me then -- pivot element then --- pivot se bada element
// in such a way that releative order should be maintained 

// better clearity ke liye example dekhe...

// Input: nums = [9,12,5,10,14,3,10], pivot = 10
// Output: [9,5,3,10,10,12,14]



#include<bits/stdc++.h>
using namespace std;class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();

        vector<int>v1; // elements less than pivot
        vector<int>v2; // element==pivot
        vector<int>v3; // element greater than pivot

        for(int i=0;i<n;i++)
        {
            if(nums[i]<pivot)
            {
                v1.push_back(nums[i]);
            }
            else if(nums[i]==pivot)
            {
                v2.push_back(nums[i]);
            }
            else
            {
                v3.push_back(nums[i]);
            }
        }
         
         vector<int>v; // resultant vector which contains (v1,v2,v3)
        // v1,v2,v3 ko copy kie hai v me jo ki humra final ans vector hai--

         for (int j : v1) {
          v.push_back(j);
          }
         for (int j : v2) {
          v.push_back(j);
          }
         for (int j : v3) {
          v.push_back(j);
      }
      return v;
       
    }
};


// Approach-----

// basically approach ye hai ki hum 3 vector banayenge(v1,v2,v3) for element less than pivot, equal to pivot and greater than pivot respectively
// array ko iterarte krenge and phir condition check krke jo element chota usko vi me push,agr equal to too v2 me nhi to v3 me 

// phir ek final vector lenge jo humra answer vector hoga (v)
// usme sab ko copy mar denge