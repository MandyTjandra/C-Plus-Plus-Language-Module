#include <iostream>
using namespace std;

int main()
{
	int i;
	for (i = 1; i <= 6; i++) {
		cout << i << "\n";
		//   Jika i adalah 4, maka keluar dari perulangan
		if (i == 4) {
			break;
		}
	}
	return 0;
}