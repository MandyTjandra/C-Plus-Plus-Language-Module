#include <iostream>
#include <set>

using namespace std;

int main(){
    set<int> s1{ 1, 4, 5, 2, 3 };

    // Find the element 2 in the set and get its iterator
    auto lower_bound = s1.find(2); 
    
    // Iterate from the found element to the end of the set
    for(auto it = lower_bound; it != s1.end(); ++it){
        cout << " " << *it;  // Print each element
    }
    
    return 0;
}
