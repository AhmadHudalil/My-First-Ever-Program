#include <iostream>
#include <windows.h> // Untuk fungsi Sleep
using namespace std;

//contoh syntax foreach loop
// int main(){
//     system("cls");

//     string buah []= {"Mangga", "Pisang", "Apel", "Jeruk", "Semangka"};

//     cout<<"Cetak Daftar Buah:"<<endl;

//     //cara foreachloop
//     for(string b : buah){
//         if(b=="Jeruk"||b=="Anggur"){
//             continue; //mengabaikan perulangan ketika b="Apel"
//         }

//         cout<< b << endl;
//         Sleep(1000);
//     } //ini digunakan jika kumpulan datanya sangat banyak dan kita tidak perlu
//       //menggunakan index untuk mengakses data tersebut

// //     //cara biasa
// //     for(int i=0; i<5; i++){
// //         cout<< "-"<< buah[i] << endl;
// //         Sleep(1000);
// //     }//ini digunakan jika kita perlu mengakses data berdasarkan indexnya dan isi
// //     //kumpulan datanya tidak terlalu banyak

// //     return 0;
// }

int main(){
    system("cls");

    // for (int i =1; i<=10; i++){
    //     cout<< i <<"......"<< endl;
        
    //     if(i==7){
    //         break; //mennghentikan perulangan ketika i=7
    //     }
        
    //     Sleep(1000);
    // }

    // for (int i =1; i<=10; i++){
    //     if(i==5||i==6){
    //         continue; //mengabaikan perulangan ketika i=5
    //     }else if(i==7){
    //         continue;
    //     }

    //     cout<< i <<"......"<< endl;

    // }

    for (int i=0; i<=10; i++){
        if(i==3 || i==5)
            continue; //mengabaikan perulangan ketika i adalah bilangan genap
        if(i==8)
            break; //menghentikan perulangan ketika i=8

        cout<< i <<"......"<< endl;
        Sleep(1000);
    }
    return 0;
}