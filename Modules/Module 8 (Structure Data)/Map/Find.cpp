#include <iostream>
#include <map>
using namespace std;

int main() {
    // Initializing the map with student ID and grade
    map<int, string> student = {{1, "A"}, {2, "B"}, {3, "C"}};

    // Finding the element with key 2
    auto it = student.find(2);
    
    // Checking if the key was found
    if (it != student.end()) {
        cout << "Ditemukan: " << it->first << " : " << it->second << endl;  // Output the found element
    } else {
        cout << "Tidak ditemukan" << endl;  // Output when the element is not found
    }

    return 0;
}
