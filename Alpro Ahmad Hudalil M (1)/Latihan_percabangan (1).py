import os

os.system("cls")
print("Input Data Mahasiswa")
print("--------------------")
nim= input("NIM: ")

if nim == "24.51.001" :
    print ("Nama : Budi Anduk")
    print ("Jurusan : S1 - Teknik Informatika")
    print ("Umur : 17 Tahun")
elif nim == "24.50.002" :
    print ("Nama : Aziz Gagap")
    print ("Jurusan : S1 - Sistem Informasi")
    print ("Umur : 18 Tahun")
elif nim == "24.51.003" :
    print ("Nama : Parto")
    print ("Jurusan : S1 - Teknik Informatika")
    print ("Umur : 19 Tahun")
else:
    print("Maaf Data yang anda ketik tidak ditemukan")
