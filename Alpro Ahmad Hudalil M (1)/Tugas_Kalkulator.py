import os
import Module_Kalkulator

repeat= "Y"
while (repeat.upper()=="Y"): 
    
    os.system("cls")

    print("---------------------------------------------")
    print("           KALKULATOR SEDERHANA              ")
    print("        Oleh : Ahmad Hudalil Muttaqin        ")
    print("        NIM  : 25.50.026                     ")
    print("---------------------------------------------")
    angka1=float(input("Masukkan Angka 1 :"))
    angka2=float(input("Masukkan Angka 2 :"))
    print("---------------------------------------------")
    print("Pilih Operasi Kalkulator :")
    print("1. Penjumlahan (+)")
    print("2. Pengurangan (-)")
    print("3. Perkalian   (*)")
    print("4. Pembagian   (/)")
    print("---------------------------------------------")
    operasi=int(input("Masukkan Pilihan Operasi (1-4) :"))
    print("---------------------------------------------")
    hasil = Module_Kalkulator.inputpilihan(operasi, angka1, angka2)

    print(" Hasilnya Adalah :",hasil)

    repeat=input("Apakah Anda Ingin Mengulangi Lagi (Y/N)? : ")
    print("---------------------------------------------")
    print("               Terima Kasih                  ")