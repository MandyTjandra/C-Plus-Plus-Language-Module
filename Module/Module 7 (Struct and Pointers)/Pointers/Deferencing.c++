#include <iostream>
#include <string>
using namespace std;

int main() {
    string food = "Pizza";  // Variable declaration
    string* ptr = &food;    // Pointer declaration (stores the address of food)

    // Reference: Output the memory address of 'food' with the pointer
    cout << "Memory address of food: " << ptr << "\n"; // ptr holds the address of 'food'

    // Dereference: Output the value of 'food' with the pointer
    cout << "Value of food (dereferenced): " << *ptr << "\n"; // *ptr gives the value at the address stored in ptr (which is "Pizza")

    return 0;
}
