#include <iostream>
#include <stack>
using namespace std;

int main() {
  stack<int> s;
  s.push(2);
  s.push(3);
  s.push(4);
  cout << s.size();  // This will print the size of the stack, which is 3
  return 0;
}
