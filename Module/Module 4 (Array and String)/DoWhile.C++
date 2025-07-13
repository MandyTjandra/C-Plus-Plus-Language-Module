#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    do
    {
        cout << "Num sekarang adalah " << num << "\n";
        cout << "Masukkan bilangan integer positif (-1 untuk keluar ): ";
        cin >> num;
    } while (num != -1);
    return 0;
}