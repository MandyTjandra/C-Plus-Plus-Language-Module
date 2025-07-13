#include <iostream>
using namespace std;

int main(){
    char arr;

    cout << "Masukan huruf dari A sampai Z" << endl;
    cin >> arr;

    if(arr == 'a' || arr == 'A'){
        cout << "Huruf yang dimasukan adalah A." << endl;
    } else if (arr == 'b' || arr == 'B') { 
        cout << "Huruf yang dimasukan adalah B." << endl;
    } else if (arr == 'c' || arr == 'C'){
        cout << "Huruf yang dimasukan adalah C." << endl;
    } else {
        cout << "Huruf selain A atau B atau C." << endl;
    }
}