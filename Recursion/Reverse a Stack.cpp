// Question ye hai ki --> You are given a stack St. You have to reverse the stack using recursion.
//
// Input:
   // St = {3,2,1,7,6}
// Output:
  // {6,7,1,2,3}
// Explanation:
   // Input stack after reversing will look like the stack in the output.

#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    void Reverse(stack<int> &st){
        
        if(st.empty())
        {
            return;
        }
       int top=st.top();
        
        st.pop();
        Reverse(st); // recursivve calling
        
        stack<int>temp; // temp stack
        while(!st.empty())
        {
            temp.push(st.top());
            st.pop();
        }
        st.push(top);
        
        while(!temp.empty())
        {
            st.push(temp.top());
            temp.pop();
        }
    }
};

//apprach ye hai ki --> ek stack(temp) use kie hai 

//  1.stack ke top ko side me rakh lo
// 2. use recursion call to reverse remaining stack
// 3. wapas ate time  insert at bottom (stack ke top)
// 4. return ans





// recursive diagram for this approach 


        //        Reverse({1, 2, 3})
        //                  |
        //                Pop(1)
        //                  |
        //        Reverse({2, 3})
        //                  |
        //                Pop(2)
        //                  |
        //        Reverse({3})
        //                  |
        //                Pop(3)
        //                  |
        //        Reverse({})
        //                  |
        //   Base case (empty stack) → Return
        //                  |
        //   Unwind: Push(3) → {3}
        //                  |
        //   Unwind: Push(2) → {2, 3}
        //                  |
        //   Unwind: Push(1) → {1, 2, 3}
        //                  |
        //   Use temp stack:
        //                  |
        //   Move elements: temp = {3, 2, 1}
        //                  |
        //   Push top (1) → {1}
        //                  |
        //   Push temp elements → {3, 2, 1}
