#include <iostream>
#include <map>
using namespace std;

int main() {
    // Creating an empty map
    map<int, string> student;

    // Checking if the map is empty
    cout << "Kosong? " << student.empty() << endl;  // Output: 1 (true)

    // Inserting an element into the map
    student[1] = "A";

    // Checking again if the map is empty
    cout << "Kosong? " << student.empty() << endl;  // Output: 0 (false)

    return 0;
}
