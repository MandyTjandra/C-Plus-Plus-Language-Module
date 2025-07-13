#include <queue>
#include <iostream>
using namespace std;

int main()
{ 
    // Declare a priority queue of integers (max-heap by default)
    priority_queue<int> pq;

    // Push an element into the priority queue
    pq.push(10); // The queue now contains {10}

    // Pop the top element from the priority queue
    pq.pop(); // The queue is now empty

    // Print the size of the priority queue (should be 0 after pop)
    cout << pq.size() << endl; // Will output 0 since the queue is empty

    return 0;
}
