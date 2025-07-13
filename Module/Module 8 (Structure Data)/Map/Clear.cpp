#include <iostream>
#include <map>
using namespace std;

int main() {
    // Initializing the map with key-value pairs
    map<int, string> student = {{1, "Alice"}, {2, "Bob"}, {3, "Charlie"}};

    // Clearing all elements from the map
    student.clear();

    // Checking if the map is empty after clearing it
    cout << "Kosong? " << student.empty() << endl;  // Output: 1 (true)

    return 0;
}
