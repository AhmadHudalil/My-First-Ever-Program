nim= input("Masukkan NIM Mahasiswa : ")
nilai= int(input("Masukkan Nilai : "))

print("             Input Data Mahasiswa              ")
print("Tugas Oleh : Ahmad Hudalil Muttaqin (25.50.026)")
print("-----------------------------------------------")

if nim == "24.51.001" :
    print("Nim :", nim)
    print ("Nama : Budi Anduk")
    print ("Jurusan : S1 - Teknik Informatika")
    print ("Nilai :",nilai )
elif nim == "24.50.002" :
    print("Nim :", nim)
    print ("Nama : Aziz Gagap")
    print ("Jurusan : S1 - Sistem Informasi")
    print ("Nilai :",nilai )
elif nim == "24.51.003" :
    print("Nim :", nim)
    print ("Nama : Parto")
    print ("Jurusan : S1 - Teknik Informatika")
    print ("Nilai :",nilai )
elif nim == "25.50.026" :
    print("Nim :", nim)
    print ("Nama : Ahmad Hudalil Muttaqin")
    print ("Jurusan : S1 - Sistem Informasi")
    print ("Nilai :",nilai )
else:
    print("Maaf Data yang anda ketik tidak ditemukan")


if nilai >= 90 and nilai <= 100 :
    print("Grade : A")
elif nilai >= 80 and nilai <= 89 :
    print ("Grade  : AB")
elif nilai >= 70 and nilai <= 79 :
    print ("Grade  : B")
elif nilai >= 60 and nilai <= 69 :
    print ("Grade  : BC")
elif nilai >= 50 and nilai <= 59 :
    print ("Grade  : C")
elif nilai >= 1 and nilai <= 50 :
    print ("Grade  : D")
else:
    print("Grade : E")

print("            Sekian dan Terima Kasih            ")
print("-----------------------------------------------")

