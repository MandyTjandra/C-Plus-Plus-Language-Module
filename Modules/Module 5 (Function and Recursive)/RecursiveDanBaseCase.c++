#include <iostream>
using namespace std;
 
int power(int a, int m)
{
    if (m == 0) return 1;       // base case
    return (a * power(a, m-1)); // recursive case
}
 
int main()
{
    cout << power(2,3) << "\n";
    return 0;
}