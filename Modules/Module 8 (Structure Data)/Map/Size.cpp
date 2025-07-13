#include <iostream>
#include <map>
using namespace std;

int main() {
    // Initializing the map with student ID and grade
    map<int, string> student = {{1, "A"}, {2, "B"}, {3, "C"}};

    // Printing the total number of elements in the map
    cout << "Total Elemen: " << student.size() << endl;

    return 0;
}
