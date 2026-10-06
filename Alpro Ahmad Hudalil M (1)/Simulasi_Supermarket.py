import os
os.system("cls")

print ("          SIMULASI SUPERMARKET         ")
print ("     Oleh : Ahmad Hudalil Muttaqin     ")
print ("     NIM  : 25.50.026                  ")
print ("---------------------------------------")

belilagi= "Y"
totalbelanja= 0
barang = []
while (belilagi.upper()=="Y"):
    print("")
    namakodebrg = input("Masukkan Kode Barang : ")

    if (namakodebrg=="B001"):
        namabrg = "Pensil"
        hargabrg = 5000
    elif (namakodebrg=="B002"):
        namabrg = "Bolpoin"
        hargabrg = 8000
    elif (namakodebrg=="B003"):
        namabrg = "Buku"
        hargabrg = 10000
    else:
        print("Maaf, Kode Barang Tidak Tersedia")

    print("Nama Barang :", namabrg)
    print("Harga Barang :", hargabrg)

    jumlahbeli = int(input("Masukkan Jumlah Beli : "))

    totalharga = hargabrg * jumlahbeli

    rincianbelanja = {
        "Kode Barang" : namakodebrg,
        "Nama Barang" : namabrg,
        "Harga Barang": hargabrg,
        "Jumlah Beli" : jumlahbeli,
        "Total Harga" : totalharga
    }

    barang.append(rincianbelanja)

    totalbelanja = totalbelanja + totalharga

    print("Total Harga :", totalharga)

    belilagi=input("Apakah Anda Ingin Membeli lagi (Y/N)? : ")

    print("---------------------------------------")
else:
    os.system("cls")
    print("")
    print("---------------------------------------")
    print("          Rincian Belanja Anda         ")
    print("---------------------------------------")
    print("")
    for data in barang:
       print(data["Nama Barang"], "(",data["Kode Barang"],")")
       print("@",data["Jumlah Beli"], "x", data["Harga Barang"],") =", data["Total Harga"])

    print("Total Seluruh Belanja Anda Adalah :", totalbelanja)
    print("")
    print("---------------------------------------")              
    print("          Terima Kasih :D              ")