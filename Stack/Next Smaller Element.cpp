//Question is asking to find the next smaller elenment for each elemenmt in array.
// if there doest not exist any next greater element for that element then -1


// Input: arr[] = [4, 2, 1, 5, 3]
// Output: [2, 1, -1, 3, -1]

// Input: arr[] = [5, 6, 2, 3, 1, 7]
// Output: [-1, 2, -1, 1, -1, -1]

// APPROACH -- USING STACK

// 1... logic is same as to find the next greater elemet 
     //but some change is there 

// a... we will check if stack is empty and  st.top()<curr
    //  then instaed of pop we will update arr[i]=st.top();

    //  rest is same      


 #include<bits/stdc++.h>
 using namespace std;    
 class Solution {
  public:
    void immediateSmaller(vector<int>& arr) {
        //  code here
        
        int n=arr.size();
      
        stack<int>st;
        
        for(int i=n-1;i>=0;i--)
        {
            int curr=arr[i];
            if(!st.empty() && st.top()<curr)
            {
               arr[i]=st.top();
            }
            else{
                arr[i]=-1;
            }
            st.push(curr);
            
        }
    
    }
    
};