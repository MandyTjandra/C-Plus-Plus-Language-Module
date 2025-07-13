#include <iostream>
using namespace std;

int main()
{
	int i;
    for (i = 1; i <= 6; i++) {
	    // Jika i adalah 4, maka abaikan perintah printf()
        if (i == 4) {
            continue;
        }
       	cout << i << "\n";
    }
    return 0;
}