#include <iostream>
#include <set>
using namespace std;

int main(){
    // Initialize the set with values {1, 4, 2, 3, 5}, which will be sorted to {1, 2, 3, 4, 5}
    set<int> angka = {1, 4, 2, 3, 5};

    // Print the size of the set, which is 5 in this case
    cout << angka.size();  // Will output 5

    return 0;
}