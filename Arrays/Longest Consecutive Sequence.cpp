// Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.

// Input: nums = [100,4,200,1,3,2]
// Output: 4
// Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.

// approach ....
// 1.. use set to store element in uniquely sorted manner.
// 2.. then convert the set to a vector.
// the find the maximum length .

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        int count=1;
        vector<int>v;
        set<int>s;
        if(nums.empty()) return 0;
        for(int i=0;i<n;i++)
        {
            s.insert(nums[i]);
        }
        for(auto it:s)
        {
            v.push_back(it);
        }
        int maxi=1;
        for(int i=1;i<v.size();i++)
        {
            if(v[i]==v[i-1]+1)
            {
                count++;
            }else{
                maxi=max(maxi,count);
                count=1;
            }
        }
        return max(maxi,count);
    }
};