#include <iostream>
using namespace std;

//Program Login Sederhana dengan hanya 5 kali percobaan, saat salah maka baris program akan bersih
//Setelah login berhasil , baris program akan hilang dan akan di masukkan program kalkulator sederhana
int main(){
    system("cls");

    string user= "Alil";
    string pass= "12345";
    int percobaanmaks = 5;
    int percobaan = 0;

    bool loginsukses= false;

    while (loginsukses == false && percobaan < percobaanmaks){
        cout<< "=== Sistem Login Sederhana ===" << endl;
        cout<< "Oleh Ahmad Hudalil M." << endl;

        string inputUser;
        string inputPass;

        cout<< "Masukkan Username: ";
        cin>> inputUser;

        cout<< "Masukkan Password: ";
        cin>> inputPass;

        if(inputUser == user && inputPass == pass){
            cout<< "Login Berhasil! Selamat Datang, " << user << endl;
            loginsukses= true;
            _sleep(3000);
            system("cls");

        }else{
            percobaan++;
            cout<< "Username atau Password Salah. Silakan Coba Lagi." << endl;
            cout<< "Sisa Percobaan: " << (percobaanmaks - percobaan) << endl;
            system("pause");
            system("cls");
        }
    }
        // Masuk ke program kalkulator sederhana dengan pilihan operator matematika dan keluar dari aplikasi jika memilih ya dan jika tidak akan kembali memilih operator matematika
        if (loginsukses == true){
        int pilihan;
        float angka1, angka2, hasil;
        while (true){

            cout<< "=== Kalkulator Sederhana ===" << endl;
            cout<<"Oleh Ahmad Hudalil M." << endl;
            cout<<"==============================" << endl;
            cout<< "1. Penjumlahan (+)" << endl;
            cout<< "2. Pengurangan (-)" << endl;
            cout<< "3. Perkalian (*)" << endl;
            cout<< "4. Pembagian (/)" << endl;
            cout<<"==============================" << endl;
            cout<<"5. Keluar dari Aplikasi" << endl;
            cout<< "Pilih Operator: (1-5) ";
            cin>> pilihan;

            if (pilihan == 1){
                cout<< "Masukkan Angka Pertama: ";
                cin>> angka1;
                cout<< "Masukkan Angka Kedua: ";
                cin>> angka2;
                hasil = angka1 + angka2;
                cout<< "Hasil Penjumlahan: " << hasil << endl;
            
            }else if (pilihan == 2){
                cout<< "Masukkan Angka Pertama: ";
                cin>> angka1;
                cout<< "Masukkan Angka Kedua: ";
                cin>> angka2;
                hasil = angka1 - angka2;
                cout<< "Hasil Pengurangan: " << hasil << endl;
            
            }else if (pilihan == 3){
                cout<< "Masukkan Angka Pertama: ";
                cin>> angka1;
                cout<< "Masukkan Angka Kedua: ";
                cin>> angka2;
                hasil = angka1 * angka2;
                cout<< "Hasil Perkalian: " << hasil << endl;
            
            }else if (pilihan == 4){
                cout<< "Masukkan Angka Pertama: ";
                cin>> angka1;
                cout<< "Masukkan Angka Kedua: ";
                cin>> angka2;

                if (angka2 != 0){
                    hasil = angka1 / angka2;
                    cout<< "Hasil Pembagian: " << hasil << endl;
                }else{
                    cout<< "Error: Pembagian dengan nol tidak diperbolehkan." << endl;
                }
            
            }else if (pilihan == 5){
                cout<<"Apakah Anda yakin ingin keluar dari aplikasi? (y/t): ";
                string konfirmasi;
                cin>> konfirmasi;

                if (konfirmasi == "y" || konfirmasi == "Y"){
                    cout<< "Keluar dari Aplikasi. Terima Kasih!" << endl;
                    break;
                }else if (konfirmasi == "t" || konfirmasi == "T"){
                    continue;

            }else{
                cout<< "Pilihan tidak valid! Silakan pilih 1-5." << endl;
            }
            system("pause");
            system("cls");
        }
    }
    return 0;
}
    }

    






