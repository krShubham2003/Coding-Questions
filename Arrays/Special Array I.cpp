// An array is considered special if the adajacent element is either (even,odd) or vice versa

// Input: nums = [2,1,4]  since 2(E), 1(O), 4 (E)
// Output: true

// Input: nums = [4,3,1,6] seq are E,O,O,E does not have alternative
// Output: false


// ---- APPROACH USING 2 POINTER

        //int i=0;
        //int j=i+1;
// run a for loop till size()-1  and checks 

//  for (int i = 0; i < nums.size() - 1; i++) {  
        //     if (!((nums[i] % 2 == 0 && nums[j] % 2 != 0) || (nums[i] % 2 != 0 && nums[j] % 2 == 0))) {
        //         return false;  
        //     }
        //     j++;  
        // }
        // return true;




#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        int i=0;
        int j=i+1;
        for (int i = 0; i < nums.size() - 1; i++) {  
            if (!((nums[i] % 2 == 0 && nums[j] % 2 != 0) || (nums[i] % 2 != 0 && nums[j] % 2 == 0))) {
                return false;  
            }
            j++;  
        }
        return true;
        }
};



// APPROACH 2 SAME LOGIC BUT LTTLE DIFFERNT LOOP CODITION

bool isArraySpecial(vector<int>& nums) {
    int n=nums.size();
    for(int i=1;i<n;i++)
    {
        if(nums[i]%2==nums[i-1]%2)
        {
            return false;
        }
    }
    return true;
    }