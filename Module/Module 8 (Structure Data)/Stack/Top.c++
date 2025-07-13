#include <iostream>
#include <stack>
using namespace std;

int main() {
  stack<int> s;
  s.push(1);
  s.push(2);
  s.push(3);
  cout << s.top();  // This will print the top element, which is 3
  return 0;
}
