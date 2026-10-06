print("         Input Data Nilai Mahasiswa          ")
print("---------------------------------------------")
nilai = int(input("Nilai yang ingin dimasukkan : "))
nim = input        ("NIM              : ")
if nim == "24.51.001":
    print          ("Nama             :Budi Anduk")
    print          ("Jurusan          : S-1 Teknik Infomatika")
    print          ("Nilai            :", nilai)
elif nim == "24.50.002":
    print          ("Nama             : Aziz Gagap")
    print          ("Jurusan          : S-1 Sistem Informasi")
elif nim == "24.51.003":
    print          ("Nama             : Parto")
    print          ("Jurusan          : S-1 Teknik Infomatika")
else:
    print("Maaf, Nim yang anda cari tidak ada dalam pencarian")



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

print("---------------------------------------------")