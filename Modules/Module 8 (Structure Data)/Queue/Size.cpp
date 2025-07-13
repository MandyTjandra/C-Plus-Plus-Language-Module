#include <queue>
#include <iostream>
using namespace std;

int main () {
  queue<int> q1;
  
  // Print the size of the queue (should be 0 initially)
  cout << "Size of queue: " << q1.size() << endl; // 0

  q1.push(2);

  // Print the size of the queue after pushing an element (should be 1)
  cout << "Size of queue: " << q1.size() << endl; // 1

  return 0;
}
