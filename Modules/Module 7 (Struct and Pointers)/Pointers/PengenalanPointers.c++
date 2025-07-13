#include <iostream>
using namespace std;

int main() {
    int a = 10;      // Declare an integer variable
    int* ptr = &a;   // Pointer pointing to the address of variable 'a'

    // Display the value and address of variable 'a'
    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;

    // Display the size of the value and the pointer
    cout << "Size of the value a is: " << sizeof(a) << " bytes" << endl;
    cout << "Size of the pointer ptr is: " << sizeof(ptr) << " bytes" << endl;

    // Display the value stored in the pointer (address of variable 'a')
    cout << "Pointer ptr stores the address: " << ptr << endl;

    // Access the value of 'a' using the pointer
    cout << "Value pointed by ptr: " << *ptr << endl;

    // Modify the value of 'a' through the pointer
    *ptr = 20;
    cout << "Value of a after modification through ptr: " << a << endl;

    return 0;
}
