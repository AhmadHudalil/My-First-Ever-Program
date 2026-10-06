// #include <iostream>
// using namespace std;

// int main() {
//     int angka1 = 10;
//     int angka2 = 30;

//     int penjumlahan,pengurangan, perkalian;
//     double pembagian;


//     penjumlahan = angka1 + angka2;
//     pengurangan = angka1 - angka2;
//     perkalian = angka1 * angka2;
//     pembagian = (double)angka1 / (double)angka2; // untuk pembagian agar hasilnya tidak dibulatkan
//     cout << "Hasil penjumlahan: " << angka1 << " + " << angka2 << " = " << penjumlahan << endl;
//     cout << "Hasil pengurangan: " << angka1 << " - " << angka2 << " = " << pengurangan << endl;
//     cout << "Hasil perkalian: " << angka1 << " * " << angka2 << " = " << perkalian << endl;
//     cout << "Hasil pembagian: " << angka1 << " / " << angka2 << " = " << pembagian << endl;





//     return 0;
// }
    

#include <iostream>
using namespace std;

int main() {
    int angka1, angka2;

    int penjumlahan,pengurangan, perkalian;
    double pembagian;

    system("cls");

    cout << "Masukkan angka pertama: ";
    cin >> angka1;
    cout << "Masukkan angka kedua: ";
    cin >> angka2;

    penjumlahan = angka1 + angka2;
    pengurangan = angka1 - angka2;
    perkalian = angka1 * angka2;
    pembagian = (double)angka1 / (double)angka2; // untuk pembagian agar hasilnya tidak dibulatkan

    cout << "Kalkulator Sederhana" << endl;
    cout << "===============================================" << endl;
    cout << "Hasil penjumlahan: " << angka1 << " + " << angka2 << " = " << penjumlahan << endl;
    cout << "Hasil pengurangan: " << angka1 << " - " << angka2 << " = " << pengurangan << endl;
    cout << "Hasil perkalian: " << angka1 << " * " << angka2 << " = " << perkalian << endl;
    cout << "Hasil pembagian: " << angka1 << " / " << angka2 << " = " << pembagian << endl;
    cin.get();
    
    system("pause");
    return 0;
}
    