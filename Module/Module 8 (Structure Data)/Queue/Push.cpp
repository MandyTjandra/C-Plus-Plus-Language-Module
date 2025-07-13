#include <queue>
#include <iostream>
using namespace std;

int main () {
  queue<int> q1;
  q1.push(13);
  q1.push(9);
  q1.push(6); 

  // Display the front element of the queue
  cout << "Front element: " << q1.front() << endl;

  // Display and remove elements from the queue
  while (!q1.empty()) {
    cout << "Element: " << q1.front() << endl; // Show the front element
    q1.pop(); // Remove the front element
  }

  // Check if the queue is empty
  if (q1.empty()) {
    cout << "The queue is empty." << endl;
  }

  return 0;
}
