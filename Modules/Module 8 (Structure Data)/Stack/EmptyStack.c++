#include <iostream>
#include <stack>
using namespace std;

int main() {
  stack<int> s1, s2;
  s1.push(1);
  s1.push(2);
  cout << "isEmpty Stack 1 : " << s1.empty() << endl;  // Prints 0 (false)
  cout << "isEmpty Stack 2 : " << s2.empty() << endl;  // Prints 1 (true)
  return 0;
}
