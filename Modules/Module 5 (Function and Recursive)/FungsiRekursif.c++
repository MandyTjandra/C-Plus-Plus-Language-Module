#include <iostream>
using namespace std;
 
void rekursi(int n)
{
    cout << n << "\n";
    rekursi(n+1);       // memanggil dirinya sendiri
}
 
int main()
{
    rekursi(1);
    return 0;
}