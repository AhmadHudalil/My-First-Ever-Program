print("  Tugas Function & Module Python Sederhana  ")
print("       Oleh : Ahmad Hudalil Muttaqin        ")
print("       NIM  : 25.50.026                     ")
print("--------------------------------------------")

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

print("--------------------------------------------")