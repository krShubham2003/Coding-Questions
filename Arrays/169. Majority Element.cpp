#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        int el;
        for(int i=0;i<n;i++)
        {
          if(nums[i]==el)
          {
              count++;
          }
          else if(count==0)
          {
            el=nums[i];
            count=1;

          }
          else
          {
              count--;
          }
        }
        int count1=0;
        for(int i=0;i<n;i++)
        {
            if(el==nums[i])
            {
                count1++;
            }
            return el;

        }
        return 0;
    }
};
