#include <iostream>
#include <set>
using namespace std;

int main(){
    // Initialize the set with values {1, 4, 2, 3, 5}, which will be sorted to {1, 2, 3, 4, 5}
    set<int> angka = {1, 4, 2, 3, 5};

    // Print the maximum size that the set can hold
    cout << "Maximum size dari set angka diatas adalah : " << angka.max_size();

    return 0;
}
