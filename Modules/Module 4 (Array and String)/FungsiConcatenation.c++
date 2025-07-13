#include <iostream>
#include <string>
using namespace std;

int main () {
	string a = "Halo";
	string b = " Kawan";
	string c;
	
	// Copy string a ke string c
	c = a;
	
	// Tempelkan string b ke akhir string c
	c += b;
	
	cout << c << "\n";
	
	return 0;

}