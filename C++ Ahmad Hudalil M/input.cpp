#include <iostream>
using namespace std;

// int main() {
//     system("cls");
//     int x;

//     cout << "Masukkan sebuah angka: ";
//     cin >> x;
//     cout << "Angka yang Anda masukkan adalah: " << x << endl;

//     return 0;

// }

int main() {
    system("cls");
    string kata;
    int angka;
    
    cout << "Masukkan sebuah angka: ";
    cin >> angka;
    cout << "Angka yang Anda masukkan adalah: " << angka << endl;
    cin.ignore(); // membersihkan newline character dari input sebelumnya

    cout << "Masukkan sebuah kata: ";
    // cin >> kata; // untuk input string satu kata
    getline(cin, kata); // untuk input string dengan spasi
    cout << "Kata yang Anda masukkan adalah: " << kata << endl;
    cin.get();
    
    system("pause");
    
    return 0;

}