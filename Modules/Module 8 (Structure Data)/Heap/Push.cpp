#include <queue>
#include <iostream>
using namespace std;

int main()
{ 
    // Declare a priority queue of integers (max-heap by default)
    priority_queue<int> pq;

    // Push elements into the priority queue
    pq.push(10);  // Queue now contains {10}
    pq.push(30);  // Queue now contains {30, 10}, 30 is at the top since it's larger

    // Print the top element (largest element in the max-heap)
    cout << pq.top() << endl; // Will output 30

    return 0;
}
