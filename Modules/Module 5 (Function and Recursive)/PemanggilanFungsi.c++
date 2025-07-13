#include <iostream>
using namespace std;

void cetak(){
    cout << "Fungsi cetak() dipanggil" << endl;
}

void cetak (string pesan){
    cout << pesan << endl;
}

int tambahkan (int a, int b){
    return a + b;
}
int main()
{
    cetak();
    cout << "Hasil penambahan: " << tambahkan (2, 5) << endl;
    tambahkan (2,5);
    cetak("Halo, dunia");

return 0;
}