#include <iostream>
#include <set>
#include <string>

using namespace std;

int main(){
    set<string> schematics{ "National", "Programming", "Contest", "2024" };
    
    // Erase the element "Programming" from the set
    schematics.erase("Programming");
    
    // Iterate over the set and print its elements
    for (auto it = schematics.begin(); it != schematics.end(); ++it)
        cout << ' ' << *it;
    
    return 0;
}
