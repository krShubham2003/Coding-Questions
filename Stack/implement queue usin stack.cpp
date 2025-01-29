// Implement a first in first out (FIFO) queue using only two stacks. 
// The implemented queue should support all the functions of a normal queue
//  (push, peek, pop, and empty).

// peek--> means just return the top element the queue size will remain same .
// pop--> means return the top element and pop so that size is reduced, that is 
    //  the only difference etween peek and pop

//*(****) in --> amortized O(1) time complexity *** ** VVI 
// amortized means some opertaion takes 0(n) but most of the operation take O(1) 

// Approach--->
   
//   1.. we will use 2 stack as stack<int>input and stack<int>output;
    // a.....when there is any psuh opertaion we will push element in input stack
    //   void push(int x) {
    //     input.push(x);
    
    //b.....
    // but when there is other operation like pop, peek then 
    // what we will do is we will check whethere the output stack is empty or not,
    // if the output stack is empty then we will push the element form input stack to outputs stack
    // like this 
    //    if(output.empty())
    //     {
    //        while(!input.empty())
    //        {
    //         input.top();
    //         output.push(input.top());
    //         input.pop();
    //        }
    //     }

    //     and we will do what ever we have to do the operation 
    //       if peek then return output.top()
    //       if pop then we will return the result which stores the top element.

       
#include<bits/stdc++.h>
using namespace std;
class MyQueue {
public:
    stack<int>input;
    stack<int>output;
    MyQueue() {
        
    }
    
    void push(int x) {
        input.push(x);
    }
    
    int pop() {
        if(output.empty())
        {
           while(!input.empty())
           {
            input.top();
            output.push(input.top());
            input.pop();
           }
        }
           int result=output.top();
           output.pop();
           return result;
    }
    
    int peek() {
       if(output.empty())
        {
           while(!input.empty())
           {
            input.top();
            output.push(input.top());
            input.pop();
           }
        }
        return output.top();
    }
    
    bool empty() {
        if(input.empty() && output.empty()) return true;
        return false;

    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */       