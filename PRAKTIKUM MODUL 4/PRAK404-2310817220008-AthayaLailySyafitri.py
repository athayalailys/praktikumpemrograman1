while True:
    print("Pilih program:")
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Exit")

    pilihan = int(input("Masukkan pilihan: "))

    if 1 <= pilihan <= 4:
        nilai1 = float(input("Masukkan nilai pertama: "))
        nilai2 = float(input("Masukkan nilai kedua: "))

        if pilihan == 1:
            print(f"Hasil penjumlahan antara {nilai1:.2f} dan {nilai2:.2f} adalah {nilai1 + nilai2:.2f}")
        elif pilihan == 2:
            print(f"Hasil pengurangan antara {nilai1:.2f} dan {nilai2:.2f} adalah {nilai1 - nilai2:.2f}")
        elif pilihan == 3:
            print(f"Hasil perkalian antara {nilai1:.2f} dan {nilai2:.2f} adalah {nilai1 * nilai2:.2f}")
        elif pilihan == 4:
            if nilai2 != 0:
                print(f"Hasil pembagian antara {nilai1:.2f} dan {nilai2:.2f} adalah {nilai1 / nilai2:.2f}")
            else:
                print("Pembagian tidak dapat dilakukan karena nilai kedua adalah 0")
    elif pilihan == 5:
        print("Terima kasih telah menggunakan kalkulator Athaya")
        break
    else:
        print("Input Anda salah, silahkan coba lagi")
