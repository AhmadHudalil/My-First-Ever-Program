// #include <iostream>
// using namespace std;

// int  main() {
//     int panjang,lebar,luas;

//     panjang = 40;
//     lebar = 20;

//     luas = panjang * lebar;
//     cout << "Aplikasi Menghitung Luas Persegi Panjang" << endl << endl;
    
//     cout << "Panjang = " << panjang << endl;
//     cout << "Lebar   = " << lebar << endl;
//     cout << "---------------------" << endl;
//     cout << "Luas    = " << luas << endl;


//     return 0;
// }

#include <iostream>
using namespace std;

int  main() {
    system("cls");
    int panjang,lebar,luas;

    cout << "Aplikasi Menghitung Luas Persegi Panjang" << endl << endl;
    
    cout << "Panjang = ";
    cin >> panjang;

    cout << "Lebar   = ";
    cin >> lebar;

    luas = panjang * lebar;

    cout << "---------------------" << endl;
    cout << "Luas    = " << luas << endl;


    return 0;
}