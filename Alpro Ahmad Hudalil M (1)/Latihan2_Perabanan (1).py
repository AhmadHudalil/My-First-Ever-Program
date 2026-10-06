print("Input Data Penjualan")
print("--------------------")
kode= input("Kode Barang :")

if kode== "B001" :
    print("Nama Barang : Sunlight")
    print("Harga Barang : Rp.16.000")
    harga = 16000
elif kode== "B002" :
    print("Nama Barang : Shampoo clear")
    print("Harga Barang : Rp.18.000")
    harga = 18000
elif kode== "B003" :
    print("Nama Barang : Sikat Gigi")
    print("Harga Barang : Rp.14.000")
    harga = 14000
else :
    print("Maaf, Kode Barang Tidak Tersedia")

jumlah= int(input("Jumlah Beli :"))
total = harga * jumlah
print("Total Bayar :", total)
print("--------------------")