import os
os.system("cls")
# tipe data list
Listini=["Nangka", "Durian", "Mangga"]
print(Listini[1]) #perlihatkan data list yang spesifik

Listini=["Nangka", "Durian", "Mangga"]
Listini.append("Nangka")
print(Listini) #menambah data di list data boleh sama

Listini=["Nangka", "Durian", "Mangga"]
Listini.append("Apel")
Listini.remove("Durian") #atau bisa juga Listini.remove(Listini[1])
print(Listini[1]) #menghapus data di list dan urutan indeks mengisi kekosongan

# tipe data tuple
Tupleini=("Nangka", "Durian", "Mangga")
print(Tupleini) #perlihatkan data tuple

Tupleini=("Nangka", "Durian", "Mangga")
print(Tupleini[2]) #perlihatkan data tuple spesifik

Tupleini=("Nangka", "Durian", "Mangga")

Tuplekonvers=list(Tupleini)
Tuplekonvers.append("Apel")
Tuplekonvers.remove("Nangka")

Tupleini=tuple(Tuplekonvers)
print(Tupleini) #mengubah/menambahkan tipe data tuple ke list, mengeditnya, lalu mengubahnya kembali ke tuple

# tipe data set
Setini={"Nangka", "Durian", "Mangga"}
print(Setini) #perlihatkan data set

Setini={"Nangka", "Durian", "Mangga"}
Setini.add("Apel")
print(Setini) #menambah data di set data tidak bisa sama, karna hasilnya cuma muncul satu

Setini={"Nangka", "Durian", "Mangga"}
Setini.add("Apel")
Setini.remove("Durian")
print(Setini) #menghapus data di set, urutan indeks tidak berpengaruh karena set tidak berurutan

#tipe data dictionary
Mahasiswa={
    "Nama":"Ahmad Hudalil Muttaqin",
    "NIM":"25.50.026",
    "Prodi":"Sistem Informasi"
}
print(Mahasiswa) #perlihatkan data dictionary

Mahasiswa={
    "Nama":"Ahmad Hudalil Muttaqin",
    "NIM":"25.50.026",
    "Prodi":"Sistem Informasi"
}
print(Mahasiswa["Prodi"]) #perlihatkan data dictionary spesifik

Mahasiswa={
    "Nama":"Ahmad Hudalil Muttaqin",
    "NIM":"25.50.026",
    "Prodi":"Sistem Informasi" #indeks ke 0
},{
    "Nama":"Ellysianora",
    "NIM":"25.51.089",
    "Prodi":"Teknik Informatika" #indeks ke 1
}
print(Mahasiswa[0]["Nama"]) #perlihatkan data dictionary spesifik yang datanya lebih dari satu
