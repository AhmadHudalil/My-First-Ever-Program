import os

os.system("cls")
# def cetak():
#     print("Hai gimana kabarmu??")
#     print("kamu apa kabar")
#     a=5
#     b=9
#     c = a+b
#     print("Hasil a+b=", c)

# cetak()

# def sapa_nama(nama):
#     print ("Halo semua nama aku :",nama)

# sapa_nama("Alil")

# def kali3(angka):
#     hasil = angka * 3
#     print ("Hasil kali 3 :", hasil )

# nilai = int(input("Masukkan Angka Yang Diinginkan:"))
# kali3(nilai)

# def hitung(angka1, angka2):
#     print("Masukkan angka 1:",angka1)
#     print("Masukkan angka 2:",angka2)
#     print("----------------------------- +")
#     print("Hasil           :", angka1+angka2)

# hitung(15,10)

# def hitung(angka1, angka2):
#     print("Angka1 :",angka1)
#     print("Angka2 :",angka2)
#     print("-------------------------------------+")
#     print ("Hasil  65:", angka1 +angka2)

# angka1 =int(input("Masukkan Angka 1:"))
# angka2 =int(input("Masukkan Angka 2:"))
# hitung(angka1,angka2)

def tambah(a1,a2):
    a3=a1+a2
    return a3

def kurang(a1,a2):
    a3=a1-a2 
    return a3

def kali(a1,a2):
    a3=a1*a2
    return a3

def bagi(a1,a2):
    a3=a1/a2
    return a3

a1=float(input("Angka 1:"))
a2=float(input("Angka 2 :"))

hasiltambah= tambah(a1,a2)
hasilkurang= kurang(a1,a2)
hasilkali= kali(a1,a2)
hasilbagi= bagi(a1,a2)

print("Hasil Angka 1+ Angka2:",hasiltambah)
print("Hasil Angka1-Angka2  :", hasilkurang)
print("Hasil Angka1*Angka2  :",hasilkali)
print("Hasil Angka1/ Angka2 :", hasilbagi)


