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

    // Print the size of the priority queue
    cout << pq.size() << endl; // Will output 2, as there are two elements in the queue

    return 0;
}
