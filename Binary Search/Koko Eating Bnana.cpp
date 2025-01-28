// Given an array arr[] of integers where each element represents a pile of bananas,
// and Koko has k hours to finish all the piles,
// find the minimum number of bananas (s) Koko must eat per hour to finish all the bananas within k hours.
// Each hour, Koko chooses a pile and eats s bananas from it. 
// If the pile has fewer than s bananas, 
// she consumes the entire pile for that hour and won't eat any other banana during that hour.

// Input: arr[] = [3, 6, 7, 11] , k = 8
// Output: 4
// Explanation: Koko eats at least 4 bananas per hour to finish all piles within 8 hours, 
// as she can consume each pile in 1 + 2 + 2 + 3 = 8 hours.

// Appproach is this -----
// 1.. we will use binary search and set our left=1 and right=max(arr[]) here it will be 11
// l=1, r=11 ,  r=*max_element(arr.begin(),arr.end())

// we fill check if the at mid he can be able to eat all banana then we can discard the right pos
// and shift r=mid
// if this is not the case then l=mid+1


#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
  // function to check whether he can eat all banana or not 
    bool calculate(vector<int>& arr, int k, int mid)
    {
        int count=0;
        for(int i=0;i<arr.size();i++)
        {
            count=count+arr[i]/mid;
            
            if(arr[i]%mid!=0)
            {
                count++;
            }
        }
        if(count>k){
            return false;
        }
        return true;
    }
    // binary search code
    int kokoEat(vector<int>& arr, int k) {
        // Code here
        
        int n=arr.size();
        int l=1;
        int r=*max_element(arr.begin(),arr.end());
        
        while(l<r)
        {
            int mid=(l+r)/2;
            if(calculate(arr,k,mid))
            {
                r=mid;
            }else{
                l=mid+1;
            }
        }
        return l;
    }
};