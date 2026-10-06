#include <iostream>
using namespace std;

int main(){
    system("cls");

    string username= "admin";
    string password= "12345";

    bool loginsukses= false;

    while (loginsukses == false){
        cout<< "=== Sistem Login Sederhana ===" << endl;
        cout<< "Oleh Ahmad Hudalil M." << endl;

        string inputUser;
        string inputPass;

        cout<< "Masukkan Username: ";
        cin>> inputUser;

        cout<< "Masukkan Password: ";
        cin>> inputPass;

        if(inputUser == username && inputPass == password){
            cout<< "Login Berhasil! Selamat Datang, " << username << endl;
            loginsukses= true;
        
        }else{
            cout<< "Username atau Password Salah. Silakan Coba Lagi." << endl;
            loginsukses=false;
        }
    }

}