#include <iostream>
using namespace std;
 
int jumlah(int a, int b);
 
int main()
{
    int x = 2, y = 3, hasil;
    hasil = jumlah(x, y);
    cout << hasil << "\n";
    return 0;
}
 
int jumlah(int a, int b)
{
    int hasil = a;
    hasil += b;
    return hasil;
}