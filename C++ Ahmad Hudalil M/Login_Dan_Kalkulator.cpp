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
        cout<<"=============================="<< endl;

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

            //Masuk ke program kalkulator sederhana dengan pilihan 
            //operator matematika dan keluar dari aplikasi
            
            char operasi;
            float angka1, angka2, hasil;
            string jawab= "tidak";

            while (jawab == "tidak" || jawab == "TIDAK" || jawab == "Tidak"){

                
                cout << "=== Kalkulator Sederhana ===" << endl;
                cout << "Oleh Ahmad Hudalil M." << endl;
                cout << "NIM : 25.50.026"<< endl;
                cout << "============================="<< endl;
                cout << "Operator Matematika yang Tersedia :" << endl;
                cout << "1. + = Penjumlahan"<< endl;
                cout << "2. - = Pengurangan"<< endl;
                cout << "3. * = Perkalian"<< endl;
                cout << "4. / = Pembagian"<< endl;
                cout << "============================="<< endl;
                cout << "5. Keluar Aplikasi "<< endl;
                cout << "Pilih Operator (1-5) :";
                cin >> operasi;

                if(operasi == '1'){
                    cout << "Masukkan Angka Pertama: ";
                    cin >> angka1;
                    cout << "Masukkan Angka Kedua: ";
                    cin >> angka2;
                    hasil = angka1 + angka2;
                    cout << "Hasil Penjumlahan = " << hasil << endl;
                    _sleep(2000);
                    system("cls");

                }else if(operasi == '2'){
                    cout << "Masukkan Angka Pertama: ";
                    cin >> angka1;
                    cout << "Masukkan Angka Kedua: ";
                    cin >> angka2;
                    hasil = angka1 - angka2;
                    cout << "Hasil Pengurangan: " << hasil << endl;
                    _sleep(2000);
                    system("cls");

                }else if(operasi == '3'){
                    cout << "Masukkan Angka Pertama: ";
                    cin >> angka1;
                    cout << "Masukkan Angka Kedua: ";
                    cin >> angka2;
                    hasil = angka1 * angka2;
                    cout << "Hasil Perkalian: " << hasil << endl;
                    _sleep(2000);
                    system("cls");
                    
                }else if(operasi == '4'){
                    cout << "Masukkan Angka Pertama: ";
                    cin >> angka1;
                    cout << "Masukkan Angka Kedua: ";
                    cin >> angka2;

                    if(angka2 != 0){
                        hasil = angka1 / angka2;
                        cout << "Hasil Pembagian: " << hasil << endl;
                        
                    }else{
                        cout << "Error: Pembagian dengan nol gaboleh yah." << endl;
                    }
                    _sleep(2000);
                    system("cls");
                       
                }else if(operasi == '5'){
                    cout << "Ingin Keluar Aplikasi? (ya/tidak): ";
                    cin >> jawab;
                    cout << "Keluar dari Aplikasi. Terima Kasih!" << endl;
                
                }else{
                    cout << "Operator Tidak Valid. Silakan Coba Lagi." << endl;
                
                system("pause");
                system("cls");
                }
            }



        }else{
            percobaan++;
            cout<< "Username atau Password Salah. Silakan Coba Lagi." << endl;
            cout<< "Sisa Percobaan: " << (percobaanmaks - percobaan) << endl;
            system("pause");
            system("cls");
        }
    }
    return 0;
}

