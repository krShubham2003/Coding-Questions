// question is asking to find the subsets of input..


// Input: nums = [1,2,3]
//Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]...



#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
   int n;
   // this is the 1 way to write solve using for loops..
   void solve(int idx,vector<int>& nums,vector<int>& temp,vector<vector<int>>&ans)
   {
    
    ans.push_back(temp);

    for(int j=idx;j<n;j++)
    {

        // backtracking ka khandani tarika..
       temp.push_back(nums[j]);//do something

       solve(j+1,nums,temp,ans);// explore

       temp.pop_back();// undo
    }
   }
    vector<vector<int>> subsets(vector<int>& nums) {
       n=nums.size();
       vector<int>temp;
       vector<vector<int>>ans;
       solve(0,nums,temp,ans);
       return ans;
    }
};

// another way to write the solve function using take and not_take approach..
// logic is same just way of writing is different..
// in for loops it automatically handle not_take.. steps 


//2.....
// void solve(int idx,vector<int>& nums,vector<int>& temp,vector<vector<int>>&ans)
//    {
    
//     if(idx==n)
//     {
//         ans.push_back(temp);
//         return ans;
//     }

    
//        temp.push_back(nums[idx]);
//        solve(idx+1,nums,temp,ans);

//        temp.pop_back();

//        solve(idx + 1, nums, temp, ans);
//     }
   