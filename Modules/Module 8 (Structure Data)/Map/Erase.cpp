#include <iostream>
#include <map>
using namespace std;

int main() {
    // Initializing the map with student ID and grade
    map<int, string> student = {{1, "A"}, {2, "B"}, {3, "C"}};

    // Erase the element with key 2
    student.erase(2);  // Remove the pair with key 2

    // Printing the updated map
    for (const auto &entry : student) {
        cout << entry.first << " : " << entry.second << endl;
    }

    return 0;
}
