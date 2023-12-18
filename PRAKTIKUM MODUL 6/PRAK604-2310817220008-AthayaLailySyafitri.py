kode = input().rstrip()
pesan = input().rstrip()

jumlahBintang = 0
jumlahPagar = 0

pesanTransformasi = ""
for i in range(len(kode)):
    if kode[i] == pesan[i]:
        pesanTransformasi += '*'
        jumlahBintang += 1
    else:
        pesanTransformasi += '#'
        jumlahPagar += 1

if len(kode) != len(pesan):
    print("Panjang kalimat berbeda, pesan palsu")
else:
    print(pesanTransformasi)
    print("* =", jumlahBintang)
    print("# =", jumlahPagar)

    if jumlahBintang >= jumlahPagar:
        print("Pesan Asli")
    else:
        print("Pesan palsu")
