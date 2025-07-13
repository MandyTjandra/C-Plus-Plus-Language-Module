#include <iostream>
#include <set>

using namespace std;

int main(){
    set<int> angka{ 1, 2, 3, 4, 5 };
    set<int>::iterator it;

    it = angka.begin();  // Set iterator to the first element

    it++;  // Move iterator to the second element (2)

    angka.erase(it);  // Erase the element pointed to by 'it', which is 2
    
    // Iterate over the set and print its elements
    for (auto it = angka.begin(); it != angka.end(); ++it)
        cout << ' ' << *it;
    
    return 0;
}
