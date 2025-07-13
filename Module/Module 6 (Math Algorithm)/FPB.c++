#include <bits/stdc++.h>

using namespace std;

long long fpb(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return fpb(b, a % b);
}

int main(){
    int a, b;

    cout << "Masukan dua angka yang ingin dicari FPB-nya: ";
    cin >> a >> b;

    cout << "FPB dari " << a << " dan " << b << " adalah " << fpb(a, b);
    return 0;
}