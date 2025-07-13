#include <iostream>
using namespace std;

int main()
{
    char platNomor;
    cout << "Masukkan huruf awal plat nomor anda: ";
    cin >> platNomor;

    switch(platNomor)
    {
        case 'L':
            cout << "Surabaya";
            break;

        case 'B':
            cout << "Jakarta";
            break;

        case 'D':
            cout << "Bandung";
            break;

        case 'N':
            cout << "Malang/Lumajang";
            break;

        default:
            cout << "Karakter plat nomor tidak diketahui";
    } 
    return 0;
}