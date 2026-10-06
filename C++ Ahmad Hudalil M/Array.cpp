#include <iostream>
using namespace std;

// int main(){
//     system ("cls");

//     string mobil[5]={"Toyota", "Honda", "Suzuki", "Daihatsu", "Mitsubishi"};
//     // cout << mobil[0] << endl;
//     //output Honda dan Daihatsu
   

//     //menggunakan foreach loop untuk mencetak semua isi array mobil
//     for(string m : mobil){
//         cout << m << endl;
//     }


//     return 0;
// }

int main(){
    system ("cls");

    // int angka[4];
    // int total;

    // for (int i=0; i<4; i++){
    //     cout<<"Masukkan angka ke-"<< i+1 <<": ";
    //     cin>> angka[i];
    // }

    // cout<<"----------------------"<< endl;
    // total = angka[0] + angka[1] + angka[2] + angka[3];
    // cout<<"Total dari keempat angka adalah: "<< total << endl;


    string nama = "memet";
    cout << nama[0] << endl; //m
    cout << nama[1] << endl; //e
    cout << nama[2] << endl; //m
    cout << nama[3] << endl; //e
    cout << nama[4] << endl; //t

    cout << nama.substr(0,3) << endl;
    return 0;
}