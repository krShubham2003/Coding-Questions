// Given an integer array nums that may contain duplicates, return all possible subsets
//The solution set must not contain duplicate subsets. Return the solution in any order.

 //Example 1:

// Input: nums = [1,2,2]
// Output: [[],[1],[1,2],[1,2,2],[2],[2,2]]

// note--> subset1 and subset2 me difference ye hai ki repeated answer nhi le skte 
// for better understanding refer both question and their output

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int n;
    void solve(int idx,vector<int>& nums,vector<int>& temp,vector<vector<int>>&ans)
    {
        ans.push_back(temp);
        for(int i=idx;i<n;i++)
        {
            if(i>idx && nums[i]==nums[i-1])
            {
                continue;
            }

            temp.push_back(nums[i]);
            solve(i+1,nums,temp,ans);

            temp.pop_back();
        }
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        n=nums.size();
        vector<int>temp;
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        solve(0,nums,temp,ans);
        return ans;
    }
};


// approach ye hai ki hum vector<vector<int>> subsetsWithDup(vector<int>& nums)  wale me 
// 1.. nums ko sort kr denge 
// 2.. ek extra condition check krnge for loop me 
//       if(i>idx && nums[i]==nums[i-1])
            // {
            //     continue;
            // }

// iss se hoga ye ki hum same subset generate krne se bach jayenge             