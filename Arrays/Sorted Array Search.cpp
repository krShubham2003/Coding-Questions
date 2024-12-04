// logic is simple run a foor loop and check if there exist element or not if exist 
// then return true or false ;
#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    // Function to find element in sorted array
    // arr: input array
    // k: element to be searched
    bool searchInSorted(vector<int> arr, int k) {

        // Your code here
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==k)
            {
                return true;
            }
        }
        return false;
    }
};