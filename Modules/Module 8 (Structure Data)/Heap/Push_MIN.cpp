#include <queue>
#include <iostream>
using namespace std;

int main()
{ 
    // Declare a priority queue of integers, implemented as a min-heap
    // `greater<int>` makes the queue store elements in ascending order
    priority_queue<int, vector<int>, greater<int>> pq;

    // Push elements into the priority queue
    pq.push(10); // Adding 10
    pq.push(30); // Adding 30
    pq.push(20); // Adding 20
    pq.push(5);  // Adding 5

    // While the priority queue is not empty
    while (!pq.empty())
    {
        // Print the top element (the smallest element in the min-heap)
        cout << pq.top() << " ";

        // Remove the top element from the priority queue
        pq.pop();
    }

    return 0;
}
