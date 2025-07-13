#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Vector dengan ukuran 5 (nilai default adalah 0)
    vector<int> vec1(5);
    cout << "Isi vec1: ";
    for (int i = 0; i < vec1.size(); i++)
    {
        cout << vec1[i] << " ";
    }
    cout << endl;

    // Vector diinisialisasi dengan daftar nilai {1, 2, 3, 4, 5}
    vector<int> vec2 = {1, 2, 3, 4, 5};
    cout << "Isi vec2: ";
    for (int i = 0; i < vec2.size(); i++)
    {
        cout << vec2[i] << " ";
    }
    cout << endl;

    return 0;
}
