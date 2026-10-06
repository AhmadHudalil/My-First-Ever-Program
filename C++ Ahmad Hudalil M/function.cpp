#include <iostream>
using namespace std;

int main() {
    system ("cls");

    void Mahasiswa (string nama, int umur) {
        cout << "Nama: " << nama << ", Umur: " << umur << " tahun" << endl;
    }
    Mahasiswa("Andi", 20);
    Mahasiswa("Budi", 22);
    

    return 0;
}