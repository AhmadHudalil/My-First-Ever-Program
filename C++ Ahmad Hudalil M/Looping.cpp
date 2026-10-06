#include <iostream>
#include <windows.h> // Untuk fungsi Sleep
using namespace std;

//contoh syntax while
// int main() {
//     system("cls");
    
//     int detik = 10;
    
//     cout<< "Countdown Timer" << endl;


//     while (detik > 0) {
//         cout << detik<< "detik tersisa...."<<endl;
//         // detik = detik - 1; // Mengurangi detik sebanyak 1
//         // detik -= 1; // Mengurangi detik sebanyak 1 lagi dengan cara lain
//         detik--; // Mengurangi detik sebanyak 1 lagi tapi dengan cara yg paling pendek tapi hanya bisa dikurangi satu saja
//         Sleep(1000); // Memberi jeda selama 1 detik
//     }
//     cout << "Waktu Habis!" << endl;

//     return 0;
// }

// int main() {
//     system("cls");

//     int angka = 1;

    // cout<< "Hitung Maju" << endl;


    // while (detik <= 10) {
    //     cout << detik<< "detik tersisa...."<<endl;
    //     // detik = detik - 1; // Mengurangi detik sebanyak 1
    //     // detik -= 1; // Mengurangi detik sebanyak 1 lagi dengan cara lain
    //     detik++; // Mengurangi detik sebanyak 1 lagi tapi dengan cara yg paling pendek tapi hanya bisa dikurangi satu saja
    //     Sleep(1000); // Memberi jeda selama 1 detik
    // }
    // cout << "Waktu Habis!" << endl;

//     while (angka <= 11) {
//         cout << angka<< "detik tersisa...."<<endl;
//         // detik = detik - 1; // Mengurangi detik sebanyak 1
//         // detik -= 1; // Mengurangi detik sebanyak 1 lagi dengan cara lain
//         angka+=2; // Mengurangi detik sebanyak 1 lagi tapi dengan cara yg paling pendek tapi hanya bisa dikurangi satu saja
//         Sleep(1000); // Memberi jeda selama 1 detik
//     }

//     angka = 10;
//     while (angka >= 0) {
//         cout << angka<< "detik tersisa...."<<endl;
//         // detik = detik - 1; // Mengurangi detik sebanyak 1
//         // detik -= 1; // Mengurangi detik sebanyak 1 lagi dengan cara lain
//         angka-=2; // Mengurangi detik sebanyak 1 lagi tapi dengan cara yg paling pendek tapi hanya bisa dikurangi satu saja
//         Sleep(1000); // Memberi jeda selama 1 detik
//     }
//     return 0;
// }

//contoh syntax do while
// int main(){
//     system("cls");

//     int detik=10;
//     cout<<"Countdown Timer"<<endl;

//     do{
//         cout<<detik<<" detik tersisa...."<<endl;
//         detik--;
//         Sleep(1000);
//     }while(detik>0);

//     cout<<"Waktu Habis!"<<endl;
//     return 0;
// }

// int main(){
//     system("cls");

//     int detik=1;
//     cout<<"Hitung Maju"<<endl;

//     do{
//         cout<<detik<<" detik tersisa...."<<endl;
//         detik++;
//         Sleep(1000);
//     }while(detik<=10);

//     cout<<"Waktu Habis!"<<endl;
//     return 0;
// }

//contoh syntax for

int main(){
    system("cls");
    
    // for(int i = 0; i<11; i++){
    //     cout<< i <<"......"<< endl;
    //     Sleep(1000);

    // }

    // for(int i = 11; i>0; i--){
    //     cout<< i <<"......"<< endl;
    //     Sleep(1000);
        
    // }

    // for(int i = 10; i>=0; i-=2){
    //     cout<< i <<"......"<< endl;
    //     Sleep(1000);
        
    // }

    // for(int i = 1; i<=11; i+=2){
    //     cout<< i <<"......"<< endl;
    //     Sleep(1000);
        
    // }

    for (int bilangan = 1; bilangan <= 100; bilangan ++){
        if (bilangan % 2 == 0){
            cout << bilangan << " adalah bilangan genap" << endl;
        } else {
            cout << bilangan << " adalah bilangan ganjil" << endl;
        }
    
    }
    return 0;
}