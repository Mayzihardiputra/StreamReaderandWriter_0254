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
    catch (exception &e)
    {
        // penangkapan menggunakan obyek exception
        cout << e.what() << endl;
        /*akan dieksekusi karna array data hanya memiliki 3 elemen*/
    }
    cout << "Baris Program Yang Terakhir" << endl;
    /*penanda 2: bahwa program berjalan tanpa berhenti meskipun terjadi kesalahan*/
    return 0;
}