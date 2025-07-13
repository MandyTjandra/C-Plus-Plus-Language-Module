#include <iostream>
#include <set>
using namespace std;

int main(){
    set<int> angka;

    // Check if the set is empty initially (it will be)
    cout << "Kondisi awal : " << angka.empty() << endl; // Outputs 1 (true)

    // Add elements to the set
    angka = {1, 4, 2, 3, 5};

    // Check if the set is empty after adding elements (it won't be)
    cout << "Kondisi akhir : " << angka.empty(); // Outputs 0 (false)

    return 0;
}
