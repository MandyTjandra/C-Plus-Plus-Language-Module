#include <iostream>
#include <set>
using namespace std;

int main(){
    // Declare a set of integers
    set<int> angka;

    // Initialize the set with values 1, 2, 3, 4, 5
    angka = {1, 2, 3, 4, 5};

    // Loop through the set and print each element
    for (int num : angka) {
        cout << num << " ";  // Prints each element of the set
    }
    cout << endl;  // Newline after printing all elements

    return 0;
}

/*Bisa secara langsung dengan:
#include <iostream>
#include <set>
using namespace std;

int main(){
    set<int> angka = {1, 2, 3, 4, 5};
}*/