#include <iostream>
#include <set>

using namespace std;

int main(){
    set<int> angka{ 1, 2, 3, 4, 5 };
    set<int>::iterator it1, it2;

    it1 = angka.begin();  // Set iterator to the first element
    it2 = angka.end();    // Set iterator to one past the last element

    it1++;  // Move iterator to point to the second element (2)
    it1++;  // Move iterator to point to the third element (3)

    angka.erase(it1, it2);  // Erase elements from 'it1' (3) to 'it2' (beyond 5)
    
    // Iterate over the set and print its elements
    for (auto it = angka.begin(); it != angka.end(); ++it)
        cout << ' ' << *it;
    
    return 0;
}
