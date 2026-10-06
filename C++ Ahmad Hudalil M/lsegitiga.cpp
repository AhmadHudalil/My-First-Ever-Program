#include <iostream>
using namespace std;

int main(){
    system("cls");
    double alas, tinggi, hasilluas;

    cout << "Tugas Aplikasi Menghitung Luas Segitiga" << endl;
    cout << "Oleh Ahmad Hudalil Muttqin" << endl;
    cout << "Nim : 25.50.026" << endl;
    cout << "Rumus Luas Segitiga = 0.5 x alas x tinggi" << endl;
    cout << "-----------------------------------------" << endl;
    
    cout << "Alas   = ";
    cin >> alas;

    cout << "Tinggi = ";
    cin >> tinggi;

    hasilluas = 0.5 * alas * tinggi;

    cout << "-----------------------------------------" << endl;
    cout << "Luas Segitiga = 0.5 x " << alas << " x " << tinggi << " = " << hasilluas << endl;

    system("pause");

    return 0;
}