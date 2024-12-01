// Question --> Given a stack, the task is to sort it such that the top of the stack has the greatest element.
// example -->
//Input:
//-->Stack: 3 2 1
//-->Output: 3 2 1  mtlb stack ke top me 3->2->1 aise hai element

#include<bits/stdc++.h>
using namespace std;
class SortedStack{
public:
	stack<int> s;
	void sort();
};
void SortedStack :: sort()
{
   //Your code here
   stack<int>temp;
   
   if(s.empty())
   {
       return;
   }
   int top=s.top();
   s.pop();
   
   sort();
   
   while(!s.empty() && s.top()>top)
   {
       temp.push(s.top());
       s.pop();
   }
   s.push(top);
   while(!temp.empty())
   {
       s.push(temp.top());
       temp.pop();
   }
};

// approach

// Step 1: 
//Pop the Top Element and Recursively Sort
// First Call (sort({4, 2, 3, 1})):

// Pop 4. Now the stack is {2, 3, 1}.
// Call sort({2, 3, 1}).

// // Second Call (sort({2, 3, 1})):

// Pop 2. Now the stack is {3, 1}.
// Call sort({3, 1}).

// // Third Call (sort({3, 1})):

// Pop 3. Now the stack is {1}.
// Call sort({1}).

// //
// Fourth Call (sort({1})):

// Pop 1. Now the stack is empty.
// Call sort({}) — Base case (empty stack), so we return.

// //Step 2: 

//Unwinding Phase
// Now, we begin to put the elements back into the stack in sorted order. We compare each element as we push it back into the stack.

// Fourth Call Unwinds:

// Push 1 back into the stack. Now the stack is {1}.
// Return to the third call.

// //Third Call Unwinds:

// Push 3 back into the stack. Since 3 is greater than 1, it goes on top. Now the stack is {3, 1}.
// Return to the second call.

// //Second Call Unwinds:

// Push 2 back into the stack. Now the stack is {2, 3, 1}.
// Return to the first call.

//First Call Unwinds:

//Push 4 back into the stack. Since 4 is greater than 2, it goes on top. Now the stack is {4, 2, 3, 1}.

// recursive representation

//                 sort({4, 2, 3, 1})
//                          |
//                        Pop(4)
//                          |
//                sort({2, 3, 1})
//                          |
//                        Pop(2)
//                          |
//                sort({3, 1})
//                          |
//                        Pop(3)
//                          |
//                sort({1})
//                          |
//                        Pop(1)
//                          |
//                sort({})  → Base case (empty stack)
//                          |
//           Unwind: Push(1) → {1}
//                          |
//            Unwind: Push(3) → {3, 1}
//                          |
//            Unwind: Push(2) → {2, 3, 1}
//                          |
//            Unwind: Push(4) → {4, 2, 3, 1}
//                          |
//           Final Stack: {4, 3, 2, 1}


// important to keep in mind   jab bhi koi element stack(temp) me jata hai condition ..
// true hone ke bad to stack(s) me top element push ho raha hai uske bad temp me elment..
// jo top pe hai wo wapas stack(s) me push ho ja raha hai.