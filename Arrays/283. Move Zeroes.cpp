// important thing to notice --->
// isme i aur j dono lenge 
// note--> isme me hum most important ye hai ki hum nums[i]!=nums[j] wala condition nhi check krnege 
// hum check krenge ki nums[j]!=0  agr ye true hai to swap krnge i,j and then i++;
//

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    int i=0;
    for(int j=0;j<nums.size();j++)
    {
        if(nums[j]!=0)
        {
            swap(nums[i],nums[j]);
            i++;
        }
      
       
    }
    }
};