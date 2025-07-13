#include <queue>
#include <iostream>
using namespace std;

int main()
{ 
    // Declare a priority queue of integers (max-heap by default)
    priority_queue<int> pq;

    // Push elements into the priority queue
    pq.push(10);  // Queue now contains {10}
    pq.push(30);  // Queue now contains {30, 10}, 30 is at the top

    // Check if the priority queue is empty (it is not)
    cout << pq.empty() << endl; // Will output 0 (false) because the queue is not empty

    // Remove the top elements (30 and then 10)
    pq.pop();  // Removes 30
    pq.pop();  // Removes 10

    // Check if the priority queue is empty after popping all elements
    cout << pq.empty() << endl; // Will output 1 (true) because the queue is now empty

    return 0;
}
