#include <iostream>
#include <map>
using namespace std;

int main()
{
    // Creating a map to store student ID and grade
    map<int, string> student;

    // Inserting key-value pairs into the map
    student.insert({1, "A"});
    student.insert({2, "B"});

    // Printing the initial map
    for (const auto &entry : student)
    {
        cout << entry.first << " : " << entry.second << endl;
    }

    // Modifying the value for an existing key (key 2)
    student[2] = "C";

    // Printing the updated map
    for (const auto &entry : student)
    {
        cout << entry.first << " : " << entry.second << endl;
    }

    return 0;
}
