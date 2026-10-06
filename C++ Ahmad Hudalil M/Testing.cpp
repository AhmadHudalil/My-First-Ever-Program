#include <iostream>
#include <string>

using namespace std;

int main() {

    // ========================
    // BAGIAN LOGIN
    // ========================

    string usernameBenar = "admin";
    string passwordBenar = "12345";

    string inputUser, inputPass;

    int percobaan = 0;
    int batasPercobaan = 5;

    bool loginBerhasil = false;

    while (loginBerhasil == false && percobaan < batasPercobaan) {

        cout << "==============================" << endl;
        cout << "     SISTEM LOGIN SEDERHANA   " << endl;
        cout << "==============================" << endl;

        cout << "Username : ";
        cin >> inputUser;

        cout << "Password : ";
        cin >> inputPass;

        if (inputUser == usernameBenar && inputPass == passwordBenar) {
            loginBerhasil = true;
        } else {
            percobaan++;
            cout << "\nLogin gagal!" << endl;
            cout << "Sisa percobaan: "
                 << batasPercobaan - percobaan << endl << endl;
        }
    }

    if (loginBerhasil == false) {
        cout << "\nAnda telah melebihi batas percobaan." << endl;
        cout << "Program berhenti." << endl;
        return 0;
    }

    // ========================
    // JEDA WAKTU (TANPA CHRONO)
    // ========================

    cout << "\nLogin berhasil..." << endl;
    cout << "Mohon tunggu beberapa detik...\n";

   _sleep(2000); // jeda 2 detik
    system("cls"); // bersih untuk Windows

    // ========================
    // KALKULATOR SEDERHANA
    // ========================

    char ulang;
    do {
        double angka1, angka2, hasil;
        char op;

        cout << "==============================" << endl;
        cout << "     KALKULATOR SEDERHANA     " << endl;
        cout << "==============================" << endl;
        cout<< "Menu Operasi:" << endl;
        cout<< "1. Penjumlahan (+)" << endl;
        cout<< "2. Pengurangan (-)" << endl;
        cout<< "3. Perkalian (*)" << endl;
        cout<< "4. Pembagian (/)" << endl;
        cout << "==============================" << endl;
        cout<< "5.Keluar dari Aplikasi"<< endl;
        cout << "==============================" << endl;
        cout<< "Pilih operasi (1-4) atau 5 untuk keluar: ";
        cin >> op;

        cout << "Masukkan angka pertama : ";
        cin >> angka1;

        cout << "Masukkan angka kedua : ";
        cin >> angka2;

        if (op == '1') {
            hasil = angka1 + angka2;
            cout << "Hasil = " << hasil << endl;
        }
        else if (op == '2') {
            hasil = angka1 - angka2;
            cout << "Hasil = " << hasil << endl;
        }
        else if (op == '3') {
            hasil = angka1 * angka2;
            cout << "Hasil = " << hasil << endl;
        }
        else if (op == '4') {
            if (angka2 != 0) {
                hasil = angka1 / angka2;
                cout << "Hasil = " << hasil << endl;
            } else {
                cout << "Error: Pembagian dengan nol tidak diperbolehkan!" << endl;
            }
        }
        else {
            cout << "Operator tidak valid!" << endl;
        }

        cout << "Apakah ingin keluar? (y/n): ";
        cin >> ulang;

        system("cls");

    } while (ulang == 'n' || ulang == 'N');

    cout << "Terima kasih telah menggunakan program ini." << endl;

    return 0;
}

