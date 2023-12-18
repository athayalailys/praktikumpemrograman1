angka = int(input())

if angka == 0:
    print("Nol")
elif angka >= 1 and angka < 10:
    print("Satuan")
elif angka == 10:
    print("Puluhan")
elif angka > 10 and angka < 20:
    print("Belasan")
elif angka > 20 and angka < 100:
    print("Puluhan")
else:
    print("Anda Menginput Melebihi Limit Bilangan")