import module_saya

module_saya.bersih()


# module_saya.cetak()
# module_saya. sapa_nama("ALil")
# hasil=module_saya.hitung(25,40)
# print(hasil)

print("  Tugas Function & Module Python Sederhana  ")
print("       Oleh : Ahmad Hudalil Muttaqin        ")
print("       NIM  : 25.50.026                     ")
print("--------------------------------------------")

a1=float(input("Angka 1 :"))
a2=float(input("Angka 2 :"))

hasiltambah= module_saya.tambah(a1,a2)
hasilkurang= module_saya.kurang(a1,a2)
hasilkali= module_saya.kali(a1,a2)
hasilbagi= module_saya.bagi(a1,a2)

print("--------------------------------------------")

print("Hasil Penjumlahan Angka 1 + Angka 2      :",hasiltambah)
print("Hasil Pengurangan Angka 1 - Angka 2      :",hasilkurang)
print("Hasil Perkalian Angka 1 * Angka 2        :",hasilkali)
print("Hasil Pembagian Angka 1 / Angka 2        :",hasilbagi)

print("--------------------------------------------")
