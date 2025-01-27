// Write a program to implement a Stack using Array


#include<bits/stdc++.h>
using namespace std;
class MyStack {
private:
    int arr[1000];  
    int top;        
public:
    MyStack() { top = -1; }  
    void push(int x);        
    int pop();               
};

// function to push element 
void MyStack ::push(int x) {
    // Your Code
    top=top+1;
    arr[top]=x;
    return;
}

// Function to Pop implementation

int MyStack ::pop() {
    // Your Code
    if(top== -1) return -1; // stack is empty
    
    int popedValued=arr[top];
    top--;
    return popedValued;
    
}