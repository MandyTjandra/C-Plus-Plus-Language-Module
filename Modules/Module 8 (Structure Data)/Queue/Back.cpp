#include <queue>
#include <iostream>
using namespace std;

int main () {
  queue<int> q1;
  q1.push(13);
  q1.push(9);
  q1.push(6);
  
  // Print the last element of the queue
  cout << "Back element: " << q1.back() << endl; // Should print 6

  return 0;
}
