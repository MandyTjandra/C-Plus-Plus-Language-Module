#include <queue>
#include <iostream>
using namespace std;

int main() {
    // Declare a priority queue of integers (max-heap by default)
    priority_queue<int> pq;

    // Push elements into the priority queue
    pq.push(10); // Adding 10
    pq.push(30); // Adding 30
    pq.push(20); // Adding 20
    pq.push(5);  // Adding 5

    // While the priority queue is not empty
    while (!pq.empty()) {
        // Print the top element of the priority queue (largest element)
        cout << pq.top() << " ";

        // Remove the top element from the priority queue
        pq.pop();
    }

    return 0;
}

/*Secara default, priority_queue di C++ diimplementasikan 
sebagai max-heap. Ini berarti elemen terbesar akan selalu 
berada di posisi paling atas (root) dari heap.*/