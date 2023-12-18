#include <stdio.h>

int main () {
    int pilihan;
    float nilai1, nilai2;

    do {
        printf("Pilih program :\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n");
        printf("Masukkan pilihan : ");
        scanf("%d", &pilihan);

        if (pilihan >= 1 && pilihan <= 4) {
            printf("Masukkan nilai pertama : ");
            scanf("%f", &nilai1);

            printf("Masukkan nilai kedua : ");
            scanf("%f", &nilai2);

            switch (pilihan)
            {
            case 1:
                printf("Hasil penjumlahan antara %.2f dan %.2f adalah %.2f\n", nilai1, nilai2, nilai1+nilai2);
                break;
            
            case 2:
                printf("Hasil pengurangan antara %.2f dan %.2f adalah %.2f\n", nilai1, nilai2, nilai1-nilai2);
                break;

            case 3:
                printf("Hasil perkalian antara %.2f dan %.2f adalah %.2f\n", nilai1, nilai2, nilai1*nilai2);
                break;

            case 4:
                if (nilai2 != 0) {
                    printf("Hasil pembagian antara %.2f dan %.2f adalah %.2f\n", nilai1, nilai2, nilai1/nilai2);
                } else {
                    printf("Pembagian tidak dapat dilakukan karena nilai kedua adalah 0\n");
                }
                break;
            }
        } else if (pilihan != 5) {
            printf("Input Anda salah, silahkan coba lagi\n");
        }
    } while (pilihan != 5);
    printf ("Terima kasih telah menggunakan kalkulator Athaya\n");

    return 0;
}