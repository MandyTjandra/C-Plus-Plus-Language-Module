#include <iostream>
#include <set>
using namespace std;

int main(){
    set<int> angka = {1, 4, 2, 3, 5};  // Initialize set
    for (auto it = angka.begin(); it != angka.end(); ++it)  // Iterate from beginning to end
        cout << ' ' << *it;  // Dereference iterator to access value

    return 0;
}
