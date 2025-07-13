#include <bits/stdc++.h>

using namespace std;

int kpk(int a, int b) //Salah satu cara mencari KPK, namun tidak efektif. //
{
    int terbesar = max(a, b);
    int terkecil = min(a, b);
    for (int i = terbesar; ; i += terbesar) {
        if (i % terkecil  == 0)
            return i;
    }
}

int main(){
    int a, b;

    cout << "Masukan dua angka yang ingin dicari KPK-nya: ";
    cin >> a >> b; 

    cout << "KPK dari " << a << " dan " << b << " adalah " << kpk(a, b);

    return 0;
}
