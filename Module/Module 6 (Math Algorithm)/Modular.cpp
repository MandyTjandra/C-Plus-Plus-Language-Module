#include <iostream>
using namespace std;

int main(){
    int x;

    for(int i = 0; ; i++){
        cout << "Masukan angka yang ingin diketahui apakah genap atau ganjil: " << endl;
        cin >> x;
        if (x % 2 == 0){ // Modular digunakan untuk memeriksa apakah hasil pembagian tersebut bersisa atau tidak. //
            cout << "Angka tersebut adalah angka genap.\n" << endl;
        } else {
            cout << "Angka tersebut adalah angka ganjil. \n" << endl;
        }
    } 

    return 0;
}