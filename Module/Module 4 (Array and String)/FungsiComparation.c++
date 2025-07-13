#include <iostream>
#include <string>
using namespace std;

int main () {
	string a = "Halo";
	string b = "Hai";
	string c = "Halo";
	
	if(a == b) cout << "String a sama dengan b\n";
	else cout << "String a tidak sama dengan b\n";
	
	if(a == c) cout << "String a sama dengan c\n";
	else cout << "String a tidak sama dengan c\n";
	
	return 0;

}