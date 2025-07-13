#include <iostream>
using namespace std;

void swap(int* num1, int* num2) {
    int temp = *num1; // Store the value pointed to by num1
    *num1 = *num2;    // Assign the value pointed to by num2 to num1
    *num2 = temp;     // Assign the stored value to num2
}

int main() {
    int a, b;

    cout << "Enter two numbers:" << endl;
    cout << "Number 1: ";
    cin >> a;
    cout << "Number 2: ";
    cin >> b;

    cout << "\nBefore swapping:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    // Call the swap function with pointers
    swap(&a, &b);

    cout << "\nAfter swapping:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}
