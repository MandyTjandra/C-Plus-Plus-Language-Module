#include <iostream>
using namespace std; 

int main () 
{
	int matriks[5][6];
	matriks[2][3] = 100;
	matriks[1][4] = 200;

	cout << matriks[2][3] << " " << matriks [1][4] << endl;
	return 0;
}