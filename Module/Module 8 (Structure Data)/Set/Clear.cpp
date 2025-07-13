#include <iostream>
#include <set>

using namespace std;

int main(){
    set<int> s1{ 1, 4, 5, 2, 3 };

    // Clear all elements from the set
    s1.clear();

    // Check if the set is empty and print the result
    cout << s1.empty();  // Expected output: 1 (true)
    
    return 0;
}
