#include <iostream>
using namespace std; 

bool isPrimeNaive(int n){ // Ini merupakan salah satu cara mencari bilangan prima, namun cara ini kurang efektif. //
    if(n <= 1){
        return false;
    }
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int x;

    cout << "Masukan angka yang ingin diperiksa: " << endl;
    cin >> x;

    if(isPrimeNaive(x)){
        cout << "Bilangan ini adalah bilangan prima" << endl;
    } else {
        cout << "Bilangan ini bukan bilangan prima." << endl;
    }


    return 0;
}