// approach is use map and check whichever element freq is greater then n/2 just push that into vector(ans)

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        unordered_map<int,int>m;
        for(int i=0;i<n;i++)
        {
            m[nums[i]]++;
        }

        for(auto&it:m)
        {
            if(it.second>n/3)
            {
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};