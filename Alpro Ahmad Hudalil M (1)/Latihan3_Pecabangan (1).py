import os

os.system("cls")
print("Input Nilai Mahasiswa")
print("---------------------")
nilai= int(input("masukkan nilai :"))

if (nilai >= 90 and nilai <= 100) :
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

print("---------------------")