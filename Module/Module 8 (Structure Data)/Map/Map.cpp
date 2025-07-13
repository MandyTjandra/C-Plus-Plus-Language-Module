#include <iostream>
#include <map>
using namespace std;

int main() {
    // Create a map to store integer keys and string values
    map<int, string> student;

    // Inserting key-value pairs into the map
    student[1] = "Alice";
    student[2] = "Bob";
    student[3] = "Charlie";

    // Printing the elements of the map
    for (const auto &entry : student) {
        cout << "ID: " << entry.first << ", Name: " << entry.second << endl;
    }

    return 0;
}
