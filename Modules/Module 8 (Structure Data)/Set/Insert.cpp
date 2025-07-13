#include <bits/stdc++.h>
using namespace std;

int main(){
    set<int> s1;
    s1.insert(1); // Insert elements into set s1
    s1.insert(4);
    s1.insert(2);
    s1.insert(5);
    s1.insert(3);

    // Print elements of s1
    cout << "Elemen pada Set 1: ";
    for (auto it = s1.begin(); it != s1.end(); it++)
        cout << *it << " ";

    set<int> s2;

    // Insert elements from s1 starting from the element found at s1.find(3) into s2
    s2.insert(s1.find(3), s1.end());

    // Print elements of s2
    cout << "\nElemen pada Set 2: ";
    for (auto it = s2.begin(); it != s2.end(); it++)
        cout << *it << " ";
}
