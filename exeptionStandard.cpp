#include <iostream>
#include <exception>
// untuk obyek exception yg akan kita gunakan
#include <array>
// untuk obyek array yg akan kita gunakan
using namespace std;

int main()
{
    cout << "Awal Program" << endl; // penanda 1
    try
    {
        array<int, 3> data = {10, 20, 30};
        // pesan array integer 3 elemen
        cout << data.at(4) << endl;
        // memanggil array elemen ke5
    }
}