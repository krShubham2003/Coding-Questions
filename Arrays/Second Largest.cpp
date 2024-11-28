
// in this dont use sorting thechnique
//---> agr duplicate element agr raha to answer glt dega islye
// do variable bnao first and second elemnt track krne ke lye aur dono ko INT_MIN se initate kro
// normal for loop chala ke condition dekh lo code me se 


#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here
        int first=INT_MIN;
        int sec=INT_MIN;
        
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>first)
            {
                
                sec=first;
                 first=arr[i];
            }
            else
            {
                if(arr[i]<first && arr[i]>sec)
                {
                    sec=arr[i];
                }
            }
        }
        if(sec==INT_MIN) return -1;
        return sec;
    }
};