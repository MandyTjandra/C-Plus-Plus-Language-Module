#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;

    cout << "Enter a sentence: ";
    getline(cin, input); // Reads the entire line, including spaces

    cout << "You entered: " << input << endl;

    return 0;
}
