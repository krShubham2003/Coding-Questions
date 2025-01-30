// Question is asking to find the next grater elenment for each elemenmt in array.
// if there doest not exist any next greater element for that element then -1

// Input: arr[] = [1, 3, 2, 4]
// Output: [3, 4, 4, -1]
// Explanation: The next larger element to 1 is 3, 3 is 4, 2 is 4 and for 4,
//  since it doesn't exist, it is -1.

// Input: arr[] = [6, 8, 0, 1, 3]
// Output: [8, -1, 1, 3, -1]


// APPROACH -----

// we will use STACK --

// 1.. we will start loop from n-1
// 2.. and we will check while the stack is not empty and arr[i]>=stack.top()
   //then  we wil simply pop that elemnt from stack

// 3..if(stack.empty())  means stack empty haib to 
    //  {
    //     ans[i]=-1; means stack empty ho gya hai
    //  } else{
    //     ans[i]=stack.top(); agr stack empty nhi hai to ans[i] me stack.top() krdo
    //  }   


 // 4.. stack.push(arr[i]);    

 #include<bits/stdc++.h>
 using namespace std;
 class Solution {
  public:
    // Function to find the next greater element for each element of the array.
    vector<int> nextLargerElement(vector<int>& arr) {
        // code here
        int n=arr.size();
        vector<int>ans(n,-1);
        stack<int>st;
        
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && st.top()<=arr[i])
            {
                st.pop();
            }
            if(st.empty()) ans[i]=-1;
            
            else{
                ans[i]=st.top();
            }
            st.push(arr[i]);
           
        }
        return ans;
    }
};