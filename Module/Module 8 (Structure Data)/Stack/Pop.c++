#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;  // Create an empty stack of integers
    
    // Push elements onto the stack
    s.push(1);  // Stack: [1]
    s.push(2);  // Stack: [1, 2]
    s.push(3);  // Stack: [1, 2, 3]
    
    // Print the contents of the stack
    cout << "Isi dari stackya adalah: ";
    stack<int> temp = s;  // Create a temporary stack to avoid modifying the original stack
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;

    // Pop elements from the stack
    s.pop();  // Stack: [1, 2] (3 is removed)
    s.pop();  // Stack: [1] (2 is removed)
    s.pop();  // Stack: [] (1 is removed)

    // Stack is now empty
    cout << "Isi dari stack sekarang adalah: ";
    stack<int> temp2 = s;  // Create a new temporary stack for the second print
    while (!temp2.empty()) {
        cout << temp2.top() << " ";
        temp2.pop();
    }
    cout << endl;
    
    return 0;
}
