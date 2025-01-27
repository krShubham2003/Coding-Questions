// implement using queue yusing array

class MyQueue {
private:
    int arr[100005]; // Array to implement the queue
    int front;       // Index of the front element
    int rear;        // Index of the next available position

public:
    // Constructor to initialize the queue
    MyQueue() {
        front = 0;  // Initialize front index to 0
        rear = 0;   // Initialize rear index to 0
    }

    void push(int x); // Function to add an element to the queue
    int pop();        // Function to remove and return the front element
};


// here is the code 
// Function to add an element to the queue
void MyQueue::push(int x) {
    if (rear == 100005) {
        // Queue is full
        return;
    }
    arr[rear] = x; // Insert element at rear
    rear++;        // Move rear pointer forward
}

// Function to remove and return the front element of the queue
int MyQueue::pop() {
    if (front == rear) {
        // Queue is empty
        return -1;
    }
    int poppedValue = arr[front]; // Retrieve the front element
    front++;                      // Move front pointer forward
    return poppedValue;           // Return the popped element
}
