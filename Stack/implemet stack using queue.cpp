// to implement stack using queue ( 1 or 2)


#include<bits/stdc++.h>
using namespace std;
class MyStack {
public:
    queue<int>q1;
    //queue<int>q2; // if 2 queue is used 
    MyStack() {
        
    }
    
    void push(int x) {

        // using 2 queue 

        // q2.push(x);
        // while(!q1.empty())
        // {
        //     q2.push(q1.front());
        //     q1.pop();
        // }
        // swap(q1,q2);


        // using 1 queue
        q1.push(x);
        int n=q1.size();
        for(int i=0;i<q1.size()-1;i++)
        {
            q1.push(q1.front());
            q1.pop();
        }
    }
    
    int pop() {
        int result=q1.front();
        q1.pop();
        return result;
    }
    
    int top() {
        return q1.front();
    }
    
    bool empty() {
        return q1.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */