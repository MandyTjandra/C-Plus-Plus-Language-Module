#include <queue>
#include <iostream>
using namespace std;

int main () {
  queue<int> q1;
  q1.push(13);
  q1.push(9);
  q1.push(6);
  
  // Print the front element of the queue
  cout << "Front element: " << q1.front() << endl; // Should print 13

  return 0;
}
