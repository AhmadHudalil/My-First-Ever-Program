#include <iostream>
using namespace std;

int main(){
    system("cls");

    cout<<"Program Konversi Angka ke Hari"<<endl;
    cout<<"------------------------------"<<endl;
    int hari;
    cout<<"Masukkan angka (1-7) : ";
    cin>>hari;
    cout<<"------------------------------"<<endl;

    switch(hari){
        case 1:
            cout<<"Hari Senin"<<endl;
            break;
        case 2:
            cout<<"Hari Selasa"<<endl;
            break;
        case 3:
            cout<<"Hari Rabu"<<endl;
            break;
        case 4:
            cout<<"Hari Kamis"<<endl;
            break;
        case 5:
            cout<<"Hari Jumat"<<endl;
            break;
        case 6:
            cout<<"Hari Sabtu"<<endl;
            break;
        case 7:
            cout<<"Hari Minggu"<<endl;
            break;
        default:
            cout<<"Inputan salah! Masukkan angka antara 1-7"<<endl;
            break;

    }
    return 0;
}