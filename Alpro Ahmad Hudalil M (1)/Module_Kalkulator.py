def tambah (a1, a2):
    a3 = a1 + a2
    return a3

def kurang (a1, a2):
    a3 = a1 - a2
    return a3

def kali (a1, a2):
    a3 = a1 * a2
    return a3

def bagi (a1, a2):
    a3 = a1 / a2
    return a3


def inputpilihan(pilihan, a1, a2):
    if (pilihan==1):
        hasil=tambah(a1, a2)
    elif (pilihan==2):
        hasil=kurang(a1, a2)
    elif (pilihan==3):
        hasil=kali(a1, a2)
    elif (pilihan==4):
        hasil=bagi(a1, a2)
    else:
        print("Maaf, Pilihan Operasi Tidak Tersedia.")
    
    return hasil