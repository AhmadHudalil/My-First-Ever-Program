try:
    x = int(input("[?] Ur number b*tch: "))

    match x:
        case x if x < 0:
            print("[-] Negatif")
        case x:
            print("[+] Positif")
except ValueError:
    print("Harus angka")