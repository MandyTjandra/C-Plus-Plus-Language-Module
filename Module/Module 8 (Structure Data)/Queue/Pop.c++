#include <queue>
#include <iostream>
using namespace std;

int main () {
  queue<int> q1;
  q1.push(13);
  q1.push(9);
  q1.push(6);
  
  q1.pop(); // Removes 13
  q1.pop(); // Removes 9
  
  // Print the front element after popping
  if (!q1.empty()) {
    cout << "Front element after pops: " << q1.front() << endl; // Should print 6
  }

  return 0;
}
