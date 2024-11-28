// used the concept of sorting and then return the last element

#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        
        sort(arr.begin(),arr.end());
        
        for(int i=0;i<arr.size();i++)
        {
            return arr[arr.size()-1];
        }
    }
};
