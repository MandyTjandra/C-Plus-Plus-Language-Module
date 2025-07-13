#include <queue>
#include <iostream>
using namespace std;

int main () {
  queue<int> q1;
  
  // Check if the queue is empty and print the result
  cout << "Is the queue empty? " << (q1.empty() ? "Yes" : "No") << endl; // true

  q1.push(2);

  // Check if the queue is empty after pushing an element
  cout << "Is the queue empty? " << (q1.empty() ? "Yes" : "No") << endl; // false

  return 0;
}
